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

#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_AND_OFFSET UNITYSDK_OFFSET(0x1AE4CB70)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x973B60)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_COMPARETO_OFFSET UNITYSDK_OFFSET(0x973B50)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x973C00)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x973CD0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1AE4D200)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_BYTEVALUE_OFFSET UNITYSDK_OFFSET(0x973A50)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_ISFALSE_OFFSET UNITYSDK_OFFSET(0x96C280)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x3602B0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_ISTRUE_OFFSET UNITYSDK_OFFSET(0x96C290)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9739E0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1AE4C8F0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1AE4C980)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AE4CB10)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1AE46980)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_TRUE_OFFSET UNITYSDK_OFFSET(0x1AE4C8E0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OR_OFFSET UNITYSDK_OFFSET(0x1AE4CC40)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x2F75F0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0x973D50)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x973D60)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x973AC0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE4D280)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9739B0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN__CTOR_2_OFFSET UNITYSDK_OFFSET(0x9739C0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x9739A0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlBoolean_TypeDefinitionIndex = 36550;

	struct alignas(1) SqlBoolean
	{
		static ::System::Data::SqlTypes::SqlBoolean* StaticGet_True()
		{
			return (::System::Data::SqlTypes::SqlBoolean*)Il2CppClass::FromTypeDefinitionIndex(SqlBoolean_TypeDefinitionIndex)->GetStaticField(0x88E0);
		}
		static ::System::Data::SqlTypes::SqlBoolean* StaticGet_Null()
		{
			return (::System::Data::SqlTypes::SqlBoolean*)Il2CppClass::FromTypeDefinitionIndex(SqlBoolean_TypeDefinitionIndex)->GetStaticField(0x88E1);
		}
		static ::System::Data::SqlTypes::SqlBoolean* StaticGet_Zero()
		{
			return (::System::Data::SqlTypes::SqlBoolean*)Il2CppClass::FromTypeDefinitionIndex(SqlBoolean_TypeDefinitionIndex)->GetStaticField(0x88E2);
		}
		static ::System::Data::SqlTypes::SqlBoolean* StaticGet_False()
		{
			return (::System::Data::SqlTypes::SqlBoolean*)Il2CppClass::FromTypeDefinitionIndex(SqlBoolean_TypeDefinitionIndex)->GetStaticField(0x88E3);
		}
		static ::System::Data::SqlTypes::SqlBoolean* StaticGet_One()
		{
			return (::System::Data::SqlTypes::SqlBoolean*)Il2CppClass::FromTypeDefinitionIndex(SqlBoolean_TypeDefinitionIndex)->GetStaticField(0x88E4);
		}
		::System::Byte m_value; // 0x10

		::System::Void _ctor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::System::Int32 value, ::System::Boolean fNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN__CTOR_2_OFFSET))(this, value, fNull);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean get_Value()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean get_IsTrue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_ISTRUE_OFFSET))(this);
		}

		::System::Boolean get_IsFalse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_ISFALSE_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlBoolean op_Implicit(::System::Boolean x)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_IMPLICIT_OFFSET))(x);
		}

		static ::System::Boolean op_True(::System::Data::SqlTypes::SqlBoolean x)
		{
			return ((::System::Boolean(*)(::System::Data::SqlTypes::SqlBoolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_TRUE_OFFSET))(x);
		}

		static ::System::Data::SqlTypes::SqlBoolean op_BitwiseAnd(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlBoolean, ::System::Data::SqlTypes::SqlBoolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_BITWISEAND_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlBoolean op_BitwiseOr(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlBoolean, ::System::Data::SqlTypes::SqlBoolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_BITWISEOR_OFFSET))(x, y);
		}

		::System::Byte get_ByteValue()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_BYTEVALUE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_TOSTRING_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlBoolean, ::System::Data::SqlTypes::SqlBoolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_EQUALITY_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlBoolean And(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlBoolean, ::System::Data::SqlTypes::SqlBoolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_AND_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlBoolean Or(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlBoolean, ::System::Data::SqlTypes::SqlBoolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OR_OFFSET))(x, y);
		}

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_COMPARETO_OFFSET))(this, value);
		}

		::System::Int32 CompareTo_1(::System::Data::SqlTypes::SqlBoolean value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::SqlTypes::SqlBoolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_COMPARETO_1_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GETHASHCODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, reader);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GETXSDTYPE_OFFSET))(schemaSet);
		}
	};
}
