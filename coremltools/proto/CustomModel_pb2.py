# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: CustomModel.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x11\x43ustomModel.proto\x12\x14\x43oreML.Specification\"\x8d\x03\n\x0b\x43ustomModel\x12\x11\n\tclassName\x18\n \x01(\t\x12\x45\n\nparameters\x18\x1e \x03(\x0b\x32\x31.CoreML.Specification.CustomModel.ParametersEntry\x12\x13\n\x0b\x64\x65scription\x18( \x01(\t\x1a\xa2\x01\n\x15\x43ustomModelParamValue\x12\x15\n\x0b\x64oubleValue\x18\n \x01(\x01H\x00\x12\x15\n\x0bstringValue\x18\x14 \x01(\tH\x00\x12\x12\n\x08intValue\x18\x1e \x01(\x05H\x00\x12\x13\n\tlongValue\x18( \x01(\x03H\x00\x12\x13\n\tboolValue\x18\x32 \x01(\x08H\x00\x12\x14\n\nbytesValue\x18< \x01(\x0cH\x00\x42\x07\n\x05value\x1aj\n\x0fParametersEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\x46\n\x05value\x18\x02 \x01(\x0b\x32\x37.CoreML.Specification.CustomModel.CustomModelParamValue:\x02\x38\x01\x42\x02H\x03\x62\x06proto3')



_CUSTOMMODEL = DESCRIPTOR.message_types_by_name['CustomModel']
_CUSTOMMODEL_CUSTOMMODELPARAMVALUE = _CUSTOMMODEL.nested_types_by_name['CustomModelParamValue']
_CUSTOMMODEL_PARAMETERSENTRY = _CUSTOMMODEL.nested_types_by_name['ParametersEntry']
CustomModel = _reflection.GeneratedProtocolMessageType('CustomModel', (_message.Message,), {

  'CustomModelParamValue' : _reflection.GeneratedProtocolMessageType('CustomModelParamValue', (_message.Message,), {
    'DESCRIPTOR' : _CUSTOMMODEL_CUSTOMMODELPARAMVALUE,
    '__module__' : 'CustomModel_pb2'
    # @@protoc_insertion_point(class_scope:CoreML.Specification.CustomModel.CustomModelParamValue)
    })
  ,

  'ParametersEntry' : _reflection.GeneratedProtocolMessageType('ParametersEntry', (_message.Message,), {
    'DESCRIPTOR' : _CUSTOMMODEL_PARAMETERSENTRY,
    '__module__' : 'CustomModel_pb2'
    # @@protoc_insertion_point(class_scope:CoreML.Specification.CustomModel.ParametersEntry)
    })
  ,
  'DESCRIPTOR' : _CUSTOMMODEL,
  '__module__' : 'CustomModel_pb2'
  # @@protoc_insertion_point(class_scope:CoreML.Specification.CustomModel)
  })
_sym_db.RegisterMessage(CustomModel)
_sym_db.RegisterMessage(CustomModel.CustomModelParamValue)
_sym_db.RegisterMessage(CustomModel.ParametersEntry)

if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  DESCRIPTOR._serialized_options = b'H\003'
  _CUSTOMMODEL_PARAMETERSENTRY._options = None
  _CUSTOMMODEL_PARAMETERSENTRY._serialized_options = b'8\001'
  _CUSTOMMODEL._serialized_start=44
  _CUSTOMMODEL._serialized_end=441
  _CUSTOMMODEL_CUSTOMMODELPARAMVALUE._serialized_start=171
  _CUSTOMMODEL_CUSTOMMODELPARAMVALUE._serialized_end=333
  _CUSTOMMODEL_PARAMETERSENTRY._serialized_start=335
  _CUSTOMMODEL_PARAMETERSENTRY._serialized_end=441
# @@protoc_insertion_point(module_scope)
