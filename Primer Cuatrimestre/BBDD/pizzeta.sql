drop table usuario_redes;
drop table usuario_producto;
drop table oferta_usuario;
drop table oferta_producto;
drop table oferta_establecimiento;
drop table oferta;
drop table producto;
drop table establecimiento;
drop table usuario;


create table usuario
 (id_usuario varchar2(24) primary key,
  nombre varchar2(24),
  apellido1 varchar2(24),
  apellido2 varchar2(24),
  fecha_nacimiento date,
  sexo char(1),
  direccion varchar2(64),
  localidad varchar2(32),
  provincia varchar2(32),
  postal number(5),
  telefono_movil number(9),
  facebook varchar2(64),
  twitter varchar2(64),
  fecha_alta date not null,
  fecha_baja date,
  estado char(1) not null,
  constraint usuario_sexo_ck check (sexo in ('I', 'H', 'M')),
  constraint usuario_estado_ck check (estado in ('0', '1')));

create table establecimiento
 (id_shop number(9) primary key,
  nombre varchar2(24) not null,
  direccion varchar2(64),
  localidad varchar2(32),
  provincia varchar2(32),
  postal number(5),
  telefono number(9),
  latitud varchar2(16),
  longitud varchar2(16),
  fecha_alta date not null,
  fecha_baja date,
  estado char(1) not null,
  constraint establecimiento_estado_ck check (estado in ('0', '1')));

create table producto
 (id_producto number(9) primary key,
  nombre varchar2(24) not null,
  descripcion varchar2(64) not null,
  detalle varchar2(512) not null,
  foto varchar2(512) not null,
  coste number(14, 2) not null,
  venta number(14, 2) not null,
  fecha_alta date not null,
  fecha_baja date,
  estado char(1) not null,
  constraint producto_estado_ck check (estado in ('0', '1')));

create table oferta
 (id_oferta number(9) primary key,
  nombre varchar2(24) not null,
  descripcion varchar2(64) not null,
  detalle varchar2(512) not null,
  foto varchar2(512) not null,
  venta number(14, 2) not null,
  fecha_inicio date not null,
  fecha_fin date,
  fecha_alta date not null,
  fecha_baja date,
  estado char(1) not null,
  constraint oferta_estado_ck check (estado in ('0', '1')));

create table oferta_establecimiento
 (id_of_es number(9) primary key,
  id_oferta number(9),
  id_shop number(9),
  constraint of_es_id_of_fk foreign key (id_oferta) references oferta(id_oferta),
  constraint of_es_id_es_fk foreign key (id_shop) references establecimiento(id_shop));

create table oferta_producto
 (id_of_pr number(9) primary key,
  id_oferta number(9),
  id_producto number(9),
  venta number(14, 2) not null,
  constraint of_pr_id_of_fk foreign key (id_oferta) references oferta(id_oferta),
  constraint of_pr_id_pr_fk foreign key (id_producto) references producto(id_producto));

create table oferta_usuario
 (id_of_us number(9) primary key,
  id_oferta number(9),
  id_usuario varchar2(24),
  fecha_envio date not null,
  estado_envio char(1) not null,
  fecha_lectura date,
  fecha_uso date,
  venta number(14, 2),
  constraint of_us_id_of_fk foreign key (id_oferta) references oferta(id_oferta),
  constraint of_us_id_us_fk foreign key (id_usuario) references usuario(id_usuario));

create table usuario_producto
 (id_us_pr number(9) primary key,
  id_of_us number(9),
  id_producto number(9),
  unidades number(9) not null,
  venta number(14, 2) not null,
  constraint us_pr_id_of_us_fk foreign key (id_of_us) references oferta_usuario(id_of_us),
  constraint us_pr_id_pr_fk foreign key (id_producto) references producto(id_producto));

create table usuario_redes
 (id_redes number(9) primary key,
  id_usuario varchar2(24),
  id_oferta number(9),
  fecha_accion date not null,
  tipo_red char(1) not null,
  tipo_accion char(1) not null,
  seguimiento number(12),
  constraint us_re_id_us_fk foreign key (id_usuario) references usuario(id_usuario),
  constraint us_re_id_of_fk foreign key (id_oferta) references oferta(id_oferta),
  constraint us_re_ti_re_ck check (tipo_red in ('0', '1')),
  constraint us_re_ti_ac_ck check (tipo_accion in ('0', '1', '2', '3')));



insert into usuario
values ('U1000', 'ANA', 'CRUZ', 'CASTRO', SYSDATE-365*25, 'M', 'CRUCES, 4', 
	'MALAGA', 'MALAGA', 29007, 697123456, 'ACC', '@ACC', SYSDATE-410, NULL, '1');
insert into usuario
values ('U1001', 'JUAN', 'CRUZ', 'CASTRO', SYSDATE-365*22, 'H', 'CARRETERO, 4', 
	'MALAGA', 'MALAGA', 29003, 677123456, 'JCC', '@JCC', SYSDATE-400, NULL, '1');
insert into usuario
values ('U1002', 'ANTONIO', 'SALAS', 'GARRIDO', SYSDATE-365*19-100, 'H', 'GONDOMAR, 11', 
	'CORDOBA', 'CORDOBA', 14003, 617123456, 'ASG', '@ASG', SYSDATE-390, NULL, '1');
insert into usuario
values ('U1003', 'CLARA', 'BELLIDO', 'LUQUE', SYSDATE-365*39-33, 'M', 'REAL, 21', 
	'CASTRO DEL RIO', 'CORDOBA', 14321, 677112233, NULL, NULL, SYSDATE-380, NULL, '1');
insert into usuario
values ('U1004', 'ENRIQUE', 'CASAS', 'TRILLO', SYSDATE-365*27-45, 'H', 'CLAVELES, 2', 
	'RONDA', 'MALAGA', 29207, 677223344, 'ECT', '@ECT', SYSDATE-370, SYSDATE-20, '0');
insert into usuario
values ('U1005', 'SARA', 'HURTADO', 'VILLAR', SYSDATE-365*27, 'M', 'ALDERETES, 15', 
	'CORDOBA', 'CORDOBA', 14004, 677334455, 'SHV', '@SHV', SYSDATE-360, NULL, '1');
insert into usuario
values ('U1006', 'JUAN', 'GALLARDO', 'LIRIA', SYSDATE-365*19-27, 'H', 'QUESO, 2', 
	'CORDOBA', 'CORDOBA', 14008, 677445566, 'JGL', '@JGL', SYSDATE-350, SYSDATE-121, '0');
insert into usuario
values ('U1007', 'JUANA MARIA', 'BUSTOS', 'MORENO', SYSDATE-365*28-12, 'M', 'QUINTANAR, 11', 
	'POSADAS', 'CORDOBA', 14302, 677556677, 'JMBM', '@JMBM', SYSDATE-340, SYSDATE-25, '0');
insert into usuario
values ('U1008', 'CARLOS', 'MERINO', 'MATAS', SYSDATE-365*19-65, 'H', 'PALOMAS, 22', 
	'ANTEQUERA', 'MALAGA', 29220, 677667788, NULL, NULL, SYSDATE-330, NULL, '1');
insert into usuario
values ('U1009', 'SARA', 'MELLADO', 'BUSTOS', SYSDATE-365*44, 'M', 'MADRID, 33', 
	'BAEZA', 'JAEN', 23403, 722112233, 'SMB', '@SMB', SYSDATE-320, SYSDATE-79, '0');
insert into usuario
values ('U1010', 'MANUEL', 'CRUZ', 'CASARIEGO', SYSDATE-365*24-100, 'H', 'BARRILES, 4', 
	'BAEZA', 'JAEN', 23403, 677778899, 'MCC', '@MCC', SYSDATE-310, NULL, '1');
insert into usuario
values ('U1011', 'MANUELA', 'COSTA', 'HURTADO', SYSDATE-365*21, 'M', NULL, 
	'BAEZA', 'JAEN', 23403, 611987654, 'MCH', '@MCH', SYSDATE-300, SYSDATE-2, '0');
insert into usuario
values ('U1012', 'VICTOR', 'LLANOS', 'OTERO', SYSDATE-365*33-33, 'H', 'QUINTANAR, 7', 
	'JAEN', 'JAEN', 23006, 611111111, 'VLO', '@VLO', SYSDATE-290, NULL, '1');
insert into usuario
values ('U1013', 'LEONOR', 'ARANDA', 'ARRIBAS', SYSDATE-365*25-25, 'M', NULL, 
	NULL, NULL, NULL, 677123456, NULL, NULL, SYSDATE-280, NULL, '1');
insert into usuario
values ('U1014', 'IGNACIO', 'LUQUE', 'IRANZO', SYSDATE-365*34-14, 'H', 'BASTIDORES, 6', 
	'JAEN', 'JAEN', 23006, 6112222, 'ILI', '@ILI', SYSDATE-270, NULL, '1');
