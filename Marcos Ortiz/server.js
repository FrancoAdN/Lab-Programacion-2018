'use strict';
 
const ADODB = require('node-adodb');
const connection = ADODB.open('Provider=Microsoft.Jet.OLEDB.4.0;Data Source=db.mdb;');
const bodyParser = require('body-parser');
const express = require('express');
const cookieParser = require('cookie-parser');
const app = express();

app.use(bodyParser.json());
app.use(bodyParser.urlencoded({extended:true}));
app.use(cookieParser());

app.use(express.static('public'));
app.set('view-engine', 'ejs');


app.get('/', (req, resp) => resp.redirect('/login'));

app.get('/login', (req, resp) => resp.render('index.ejs'));
app.get('/register', (req, resp) => resp.render('register.ejs'));

app.post('/register', (req, resp) => {
    const bd = req.body;
    console.log(bd);
    connection
    .execute(`INSERT INTO Usuarios (Nombre, Apellido, Email, Contraseña, Telefono, Pais, Provincia, Direccion) VALUES ('${bd.name}', '${bd.last}', '${bd.email}', '${bd.pwd}', ${parseInt(bd.tel)}, '${bd.pais}', '${bd.prov}', '${bd.dir}');`)
    .then(data => {
        resp.redirect('/login');
    })
    .catch(error => {
        console.error(error);
    });

});

app.post('/login', (req, resp) => {
    const bd = req.body;
    connection
    .query(`SELECT Id, Nombre, Apellido FROM Usuarios WHERE Email = '${bd.email}' AND Contraseña = '${bd.pwd}'`)
    .then(data => {

        if(data.length == 0){
            resp.redirect('/login');
        }else{
            resp.cookie('usr', {id: data[0].Id, nombre: data[0].Nombre +' '+ data[0].Apellido});
            resp.redirect('/home')   
        }
    })
    .catch(error => {
        console.error(error);
    });
});

app.get('/home', (req, resp) => {

    connection
    .query("SELECT * FROM Productos")
    .then(data => {
        resp.render('home.ejs', {nombre: req.cookies.usr.nombre, productos: data});
    })
    .catch(error => {
        console.error(error);
    });
    
});

app.post('/pedido', (req, resp) => {
    const today = new Date();
    const date = today.getDay() + '-' + today.getMonth() +'-'+ today.getFullYear();
    connection
    .query("SELECT MAX(Id_pedido) FROM Pedidos")
    .then(data => {
        const max = data[0].Expr1000 + 1;
        const bd = req.body;
        const usr = req.cookies.usr.id;
        for(let i = 0; i < bd.length; i++){
            const exe = `INSERT INTO Pedidos (Id_pedido, Id_producto, Id_usuario, Cantidad, Talle, Fecha, Entregado) VALUES (${max} ,${parseInt(bd[i].id)}, ${usr}, ${parseInt(bd[i].cant)}, '${bd[i].talle}', '${date}', 0);`;
            connection
            .execute(exe)
            .catch(error => {
                console.error(error);
            });
        }
    })
    .catch(error => {
        console.error(error);
    });

    resp.redirect('/home');
});

app.get('/mis-pedidos', (req, resp) => {
    const usr = req.cookies.usr.id;
    const sql = "SELECT * FROM Pedidos p, Productos pr, Usuarios u WHERE (p.Id_usuario = u.Id AND pr.Id = p.Id_producto) AND u.Id = " +usr;
    connection
    .query(sql)
    .then(data => {
        console.log(data);
        let index = data[0].Id_pedido;
        let arr = [];
        let json = {
            pedido: index,
            fecha: data[0].Fecha,
            entregado: data[0].Entregado,
            usuario: {
                nombre: data[0]['u.Nombre']+ ' ' + data[0].Apellido,
                email: data[0].Email,
                telefono: data[0].Telefono,
                pais: data[0].Pais,
                provincia: data[0].Provincia,
                direccion: data[0].Direccion
            },
            productos:[{
                nombre: data[0]['pr.Nombre'],
                talle: data[0].Talle,
                cant: data[0].Cantidad,
                precio: data[0].Precio
            }]
        };
        for(let i = 1; i < data.length; i++){
            if(data[i].Id_pedido = index){
                json.productos.push({
                    nombre: data[i]['pr.Nombre'],
                    talle: data[i].Talle,
                    cant: data[i].Cantidad,
                    precio: data[i].Precio
                });
            }else{
                arr.push(json);
                index = data[i].Id_pedido;
                json = {
                    pedido: index,
                    fecha: data[i].Fecha,
                    entregado: data[i].Entregado,
                    usuario: {
                        nombre: data[i]['u.Nombre']+ ' ' + data[i].Apellido,
                        email: data[i].Email,
                        telefono: data[i].Telefono,
                        pais: data[i].Pais,
                        provincia: data[i].Provincia,
                        direccion: data[i].Direccion
                    },
                    productos:[{
                        nombre: data[i]['pr.Nombre'],
                        talle: data[i].Talle,
                        cant: data[i].Cantidad,
                        precio: data[i].Precio
                    }]
                };
            }
            console.log(arr);
        }
        resp.send(arr);
    })
    .catch(error => {
        console.error(error);
    });
    //resp.render('mis-pedidos.ejs');
});

app.listen(3000,()=>console.log('Running server'));