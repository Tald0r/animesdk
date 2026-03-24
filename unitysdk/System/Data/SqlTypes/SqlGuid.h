#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/SqlTypes/EComparison.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_DATA_SQLTYPES_SQLGUID_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x915730)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_COMPARETO_OFFSET UNITYSDK_OFFSET(0x915720)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_COMPARE_OFFSET UNITYSDK_OFFSET(0x1A171DB0)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_EQUALS_OFFSET UNITYSDK_OFFSET(0x915740)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x915750)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1A172810)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x314B50)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x915650)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A172020)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1A172140)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A171D40)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1A1720B0)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x2F75F0)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0x915760)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x915770)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9156D0)
#define SYSTEM_DATA_SQLTYPES_SQLGUID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A172890)
#define SYSTEM_DATA_SQLTYPES_SQLGUID__CTOR_1_OFFSET UNITYSDK_OFFSET(0x915620)
#define SYSTEM_DATA_SQLTYPES_SQLGUID__CTOR_OFFSET UNITYSDK_OFFSET(0x2FBE10)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlGuid_TypeDefinitionIndex = 36558;

	struct alignas(8) SqlGuid
	{
		static ::System::Data::SqlTypes::SqlGuid* StaticGet_Null()
		{
			return (::System::Data::SqlTypes::SqlGuid*)Il2CppClass::FromTypeDefinitionIndex(SqlGuid_TypeDefinitionIndex)->GetStaticField(0x268C0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_rgiGuidOrder()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SqlGuid_TypeDefinitionIndex)->GetStaticField(0x268C8);
		}
		static ::System::Int32* StaticGet_s_sizeOfGuid()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlGuid_TypeDefinitionIndex)->GetStaticField(0x8C20);
		}
		::Il2CppArray<::System::Byte>* m_value; // 0x10

		::System::Void _ctor(::System::Boolean fNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID__CTOR_OFFSET))(this, fNull);
		}

		/*
		::System::Void _ctor_1(::System::Guid g)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID__CTOR_1_OFFSET))(this, g);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_GET_ISNULL_OFFSET))(this);
		}

		/*
		::System::Guid get_Value()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_GET_VALUE_OFFSET))(this);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlGuid op_Implicit(::System::Guid x)
		{
			return ((::System::Data::SqlTypes::SqlGuid(*)(::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_OP_IMPLICIT_OFFSET))(x);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_TOSTRING_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::EComparison Compare(::System::Data::SqlTypes::SqlGuid x, ::System::Data::SqlTypes::SqlGuid y)
		{
			return ((::System::Data::SqlTypes::EComparison(*)(::System::Data::SqlTypes::SqlGuid, ::System::Data::SqlTypes::SqlGuid))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_COMPARE_OFFSET))(x, y);
		}

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlGuid x, ::System::Data::SqlTypes::SqlGuid y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlGuid, ::System::Data::SqlTypes::SqlGuid))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_OP_EQUALITY_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlGuid x, ::System::Data::SqlTypes::SqlGuid y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlGuid, ::System::Data::SqlTypes::SqlGuid))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_OP_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlGuid x, ::System::Data::SqlTypes::SqlGuid y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlGuid, ::System::Data::SqlTypes::SqlGuid))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_OP_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_COMPARETO_OFFSET))(this, value);
		}

		::System::Int32 CompareTo_1(::System::Data::SqlTypes::SqlGuid value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::SqlTypes::SqlGuid))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_COMPARETO_1_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_GETHASHCODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, reader);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_GETXSDTYPE_OFFSET))(schemaSet);
		}
	};
}
