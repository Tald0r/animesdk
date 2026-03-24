#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_DATA_SQLTYPES_SQLBYTE_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x942320)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x942310)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x942330)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x942340)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1AA6AC50)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x3602B0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9420D0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1AA6A400)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1AA6A340)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1AA69DC0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1AA6A040)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AA6A1F0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1AA6A0F0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1AA6A2D0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1AA69D70)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1AA6A260)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1AA69F60)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1AA69E90)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x2F75F0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0x9423B0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x9423C0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_TOSQLDOUBLE_OFFSET UNITYSDK_OFFSET(0x942170)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_TOSQLINT64_OFFSET UNITYSDK_OFFSET(0x9421F0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x942130)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA6ACD0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9420C0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE__CTOR_OFFSET UNITYSDK_OFFSET(0x7916B0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlByte_TypeDefinitionIndex = 36551;

	struct alignas(1) SqlByte
	{
		static ::System::Data::SqlTypes::SqlByte* StaticGet_MinValue()
		{
			return (::System::Data::SqlTypes::SqlByte*)Il2CppClass::FromTypeDefinitionIndex(SqlByte_TypeDefinitionIndex)->GetStaticField(0x88D0);
		}
		static ::System::Data::SqlTypes::SqlByte* StaticGet_MaxValue()
		{
			return (::System::Data::SqlTypes::SqlByte*)Il2CppClass::FromTypeDefinitionIndex(SqlByte_TypeDefinitionIndex)->GetStaticField(0x88D2);
		}
		static ::System::Data::SqlTypes::SqlByte* StaticGet_Null()
		{
			return (::System::Data::SqlTypes::SqlByte*)Il2CppClass::FromTypeDefinitionIndex(SqlByte_TypeDefinitionIndex)->GetStaticField(0x88D4);
		}
		static ::System::Data::SqlTypes::SqlByte* StaticGet_Zero()
		{
			return (::System::Data::SqlTypes::SqlByte*)Il2CppClass::FromTypeDefinitionIndex(SqlByte_TypeDefinitionIndex)->GetStaticField(0x88D6);
		}
		static ::System::Int32* StaticGet_s_iBitNotByteMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlByte_TypeDefinitionIndex)->GetStaticField(0x88D8);
		}
		::System::Boolean m_fNotNull; // 0x10
		::System::Byte m_value; // 0x11

		::System::Void _ctor(::System::Boolean fNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE__CTOR_OFFSET))(this, fNull);
		}

		::System::Void _ctor_1(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE__CTOR_1_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_GET_ISNULL_OFFSET))(this);
		}

		::System::Byte get_Value()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_GET_VALUE_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlByte op_Implicit(::System::Byte x)
		{
			return ((::System::Data::SqlTypes::SqlByte(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_IMPLICIT_OFFSET))(x);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_TOSTRING_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlByte op_Addition(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y)
		{
			return ((::System::Data::SqlTypes::SqlByte(*)(::System::Data::SqlTypes::SqlByte, ::System::Data::SqlTypes::SqlByte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_ADDITION_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlByte op_Subtraction(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y)
		{
			return ((::System::Data::SqlTypes::SqlByte(*)(::System::Data::SqlTypes::SqlByte, ::System::Data::SqlTypes::SqlByte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_SUBTRACTION_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlByte op_Multiply(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y)
		{
			return ((::System::Data::SqlTypes::SqlByte(*)(::System::Data::SqlTypes::SqlByte, ::System::Data::SqlTypes::SqlByte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_MULTIPLY_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlByte op_Division(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y)
		{
			return ((::System::Data::SqlTypes::SqlByte(*)(::System::Data::SqlTypes::SqlByte, ::System::Data::SqlTypes::SqlByte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_DIVISION_OFFSET))(x, y);
		}

		/*
		static ::System::Data::SqlTypes::SqlByte op_Explicit(::System::Data::SqlTypes::SqlInt64 x)
		{
			return ((::System::Data::SqlTypes::SqlByte(*)(::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_EXPLICIT_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlByte, ::System::Data::SqlTypes::SqlByte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_EQUALITY_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlByte, ::System::Data::SqlTypes::SqlByte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlByte, ::System::Data::SqlTypes::SqlByte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlByte, ::System::Data::SqlTypes::SqlByte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlByte, ::System::Data::SqlTypes::SqlByte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlDouble ToSqlDouble()
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_TOSQLDOUBLE_OFFSET))(this);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlInt64 ToSqlInt64()
		{
			return ((::System::Data::SqlTypes::SqlInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_TOSQLINT64_OFFSET))(this);
		}
		*/

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_COMPARETO_OFFSET))(this, value);
		}

		::System::Int32 CompareTo_1(::System::Data::SqlTypes::SqlByte value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::SqlTypes::SqlByte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_COMPARETO_1_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, reader);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_GETXSDTYPE_OFFSET))(schemaSet);
		}
	};
}
