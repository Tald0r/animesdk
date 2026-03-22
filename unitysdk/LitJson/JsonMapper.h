#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LitJson/ArrayMetadata.h"
#include "unitysdk/LitJson/ObjectMetadata.h"
#include "unitysdk/LitJson/PropertyMetadata.h"
#include "unitysdk/System/Object.h"

namespace LitJson { class ExporterFunc; }
namespace LitJson { class IJsonWrapper; }
namespace LitJson { class ImporterFunc; }
namespace LitJson { class JsonData; }
namespace LitJson { class JsonReader; }
namespace LitJson { class JsonWriter; }
namespace LitJson { class WrapperFactory; }
namespace LitJson { template <typename T1, typename T2> class ImporterFunc_2; }
namespace LitJson { template <typename T> class ExporterFunc_1; }
namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class TextReader; }
namespace System::Reflection { class MethodInfo; }

#define LITJSON_JSONMAPPER_ADDARRAYMETADATA_OFFSET UNITYSDK_OFFSET(0x1A4853B0)
#define LITJSON_JSONMAPPER_ADDOBJECTMETADATA_OFFSET UNITYSDK_OFFSET(0x1A485870)
#define LITJSON_JSONMAPPER_ADDTYPEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A4863C0)
#define LITJSON_JSONMAPPER_CHECKSTATIC_OFFSET UNITYSDK_OFFSET(0x1A48A610)
#define LITJSON_JSONMAPPER_CONVERTKEYTOSTRING_OFFSET UNITYSDK_OFFSET(0x1A48CA70)
#define LITJSON_JSONMAPPER_GETCONVOP_OFFSET UNITYSDK_OFFSET(0x1A4869D0)
#define LITJSON_JSONMAPPER_ISATTRIBUTEEXPORT_OFFSET UNITYSDK_OFFSET(0x1A48A700)
#define LITJSON_JSONMAPPER_PARSEKEY_OFFSET UNITYSDK_OFFSET(0x1A487550)
#define LITJSON_JSONMAPPER_READDICKEY_OFFSET UNITYSDK_OFFSET(0x1A487500)
#define LITJSON_JSONMAPPER_READSKIP_OFFSET UNITYSDK_OFFSET(0x1A48A7D0)
#define LITJSON_JSONMAPPER_READVALUE_1_OFFSET UNITYSDK_OFFSET(0x1A48A900)
#define LITJSON_JSONMAPPER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1A487570)
#define LITJSON_JSONMAPPER_REGISTERASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x1A48D250)
#define LITJSON_JSONMAPPER_REGISTERBASEEXPORTERS_OFFSET UNITYSDK_OFFSET(0x1A483000)
#define LITJSON_JSONMAPPER_REGISTERBASEIMPORTERS_OFFSET UNITYSDK_OFFSET(0x1A4840B0)
#define LITJSON_JSONMAPPER_REGISTERGENERICCONVERTTYPE_OFFSET UNITYSDK_OFFSET(0x1A48D310)
#define LITJSON_JSONMAPPER_REGISTERIMPORTER_OFFSET UNITYSDK_OFFSET(0x1A48B620)
#define LITJSON_JSONMAPPER_SAFECREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A4873F0)
#define LITJSON_JSONMAPPER_TOJSON_1_OFFSET UNITYSDK_OFFSET(0x1A48CBF0)
#define LITJSON_JSONMAPPER_TOJSON_2_OFFSET UNITYSDK_OFFSET(0x1A48CCF0)
#define LITJSON_JSONMAPPER_TOJSON_OFFSET UNITYSDK_OFFSET(0x1A48CA90)
#define LITJSON_JSONMAPPER_TOOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1A48CE90)
#define LITJSON_JSONMAPPER_TOOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1A48D000)
#define LITJSON_JSONMAPPER_TOOBJECT_3_OFFSET UNITYSDK_OFFSET(0x1A48D1F0)
#define LITJSON_JSONMAPPER_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x1A48CD60)
#define LITJSON_JSONMAPPER_TOWRAPPER_1_OFFSET UNITYSDK_OFFSET(0x1A48D1A0)
#define LITJSON_JSONMAPPER_TOWRAPPER_OFFSET UNITYSDK_OFFSET(0x1A48B5E0)
#define LITJSON_JSONMAPPER_UNREGISTEREXPORTERS_OFFSET UNITYSDK_OFFSET(0x1A48D3D0)
#define LITJSON_JSONMAPPER_UNREGISTERIMPORTERS_OFFSET UNITYSDK_OFFSET(0x1A48D4F0)
#define LITJSON_JSONMAPPER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1A48B910)
#define LITJSON_JSONMAPPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A482A90)
#define LITJSON_JSONMAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A48D610)

namespace LitJson
{
	inline static constexpr unsigned int JsonMapper_TypeDefinitionIndex = 8066;

	class JsonMapper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ImporterFunc*>*>** StaticGet_custom_importers_table()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ImporterFunc*>*>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6AC0);
		}
		static ::System::IFormatProvider** StaticGet_datetime_format()
		{
			return (::System::IFormatProvider**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6AC8);
		}
		static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet_customGenericConvertList()
		{
			return (::System::Collections::Generic::List_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6AD0);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ImporterFunc*>*>** StaticGet_base_importers_table()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ImporterFunc*>*>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6AD8);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Reflection::MethodInfo*>*>** StaticGet_conv_ops()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6AE0);
		}
		static ::System::Object** StaticGet_type_properties_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6AE8);
		}
		static ::LitJson::JsonWriter** StaticGet_static_writer()
		{
			return (::LitJson::JsonWriter**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6AF0);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ObjectMetadata>** StaticGet_object_metadata()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ObjectMetadata>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6AF8);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ExporterFunc*>** StaticGet_custom_exporters_table()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ExporterFunc*>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6B00);
		}
		static ::System::Object** StaticGet_array_metadata_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6B08);
		}
		static ::System::Object** StaticGet_static_writer_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6B10);
		}
		static ::System::Object** StaticGet_object_metadata_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6B18);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_assemblyNames()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6B20);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IList_1<::LitJson::PropertyMetadata>*>** StaticGet_type_properties()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IList_1<::LitJson::PropertyMetadata>*>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6B28);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ArrayMetadata>** StaticGet_array_metadata()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ArrayMetadata>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6B30);
		}
		static ::System::Object** StaticGet_conv_ops_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6B38);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ExporterFunc*>** StaticGet_base_exporters_table()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ExporterFunc*>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6B40);
		}
		static ::System::Int32* StaticGet_max_nesting_depth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x35C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER__CTOR_OFFSET))(this);
		}

		static ::System::Void AddArrayMetadata(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_ADDARRAYMETADATA_OFFSET))(type);
		}

		static ::System::Void AddObjectMetadata(::System::Type*& type, ::LitJson::JsonReader* reader)
		{
			return ((::System::Void(*)(::System::Type*&, ::LitJson::JsonReader*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_ADDOBJECTMETADATA_OFFSET))(type, reader);
		}

		static ::System::Void AddTypeProperties(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_ADDTYPEPROPERTIES_OFFSET))(type);
		}

		static ::System::Reflection::MethodInfo* GetConvOp(::System::Type* t1, ::System::Type* t2)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_GETCONVOP_OFFSET))(t1, t2);
		}

		static ::System::Object* SafeCreateInstance(::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_SAFECREATEINSTANCE_OFFSET))(type);
		}

		static ::System::Object* ReadDicKey(::System::Type* inst_type, ::System::String* keyObj)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_READDICKEY_OFFSET))(inst_type, keyObj);
		}

		static ::System::Object* ReadValue(::System::Type* inst_type, ::LitJson::JsonReader* reader, ::System::Boolean gridMapConvert)
		{
			return ((::System::Object*(*)(::System::Type*, ::LitJson::JsonReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_READVALUE_OFFSET))(inst_type, reader, gridMapConvert);
		}

		static ::LitJson::IJsonWrapper* ReadValue_1(::LitJson::WrapperFactory* factory, ::LitJson::JsonReader* reader)
		{
			return ((::LitJson::IJsonWrapper*(*)(::LitJson::WrapperFactory*, ::LitJson::JsonReader*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_READVALUE_1_OFFSET))(factory, reader);
		}

		static ::System::Void ReadSkip(::LitJson::JsonReader* reader)
		{
			return ((::System::Void(*)(::LitJson::JsonReader*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_READSKIP_OFFSET))(reader);
		}

		static ::System::Void RegisterBaseExporters()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_REGISTERBASEEXPORTERS_OFFSET))();
		}

		static ::System::Void RegisterBaseImporters()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_REGISTERBASEIMPORTERS_OFFSET))();
		}

		static ::System::Void RegisterImporter(::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ImporterFunc*>*>* table, ::System::Type* json_type, ::System::Type* value_type, ::LitJson::ImporterFunc* importer)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ImporterFunc*>*>*, ::System::Type*, ::System::Type*, ::LitJson::ImporterFunc*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_REGISTERIMPORTER_OFFSET))(table, json_type, value_type, importer);
		}

		static ::System::Void WriteValue(::System::Object* obj, ::LitJson::JsonWriter* writer, ::System::Boolean writer_is_private, ::System::Int32 depth)
		{
			return ((::System::Void(*)(::System::Object*, ::LitJson::JsonWriter*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_WRITEVALUE_OFFSET))(obj, writer, writer_is_private, depth);
		}

		static ::System::String* ToJson(::System::Object* obj)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_TOJSON_OFFSET))(obj);
		}

		static ::System::String* ToJson_1(::System::Object* obj, ::System::Int32 indent, ::System::Boolean prettify)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_TOJSON_1_OFFSET))(obj, indent, prettify);
		}

		static ::System::String* ToJson_2(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::String*(*)(::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_TOJSON_2_OFFSET))(obj, writer);
		}

		static ::LitJson::JsonData* ToObject(::LitJson::JsonReader* reader)
		{
			return ((::LitJson::JsonData*(*)(::LitJson::JsonReader*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_TOOBJECT_OFFSET))(reader);
		}

		static ::LitJson::JsonData* ToObject_1(::System::IO::TextReader* reader)
		{
			return ((::LitJson::JsonData*(*)(::System::IO::TextReader*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_TOOBJECT_1_OFFSET))(reader);
		}

		static ::LitJson::JsonData* ToObject_2(::System::String* json)
		{
			return ((::LitJson::JsonData*(*)(::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_TOOBJECT_2_OFFSET))(json);
		}

		static ::System::Object* ToObject_3(::System::String* json, ::System::Type* ConvertType)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_TOOBJECT_3_OFFSET))(json, ConvertType);
		}

		static ::LitJson::IJsonWrapper* ToWrapper(::LitJson::WrapperFactory* factory, ::LitJson::JsonReader* reader)
		{
			return ((::LitJson::IJsonWrapper*(*)(::LitJson::WrapperFactory*, ::LitJson::JsonReader*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_TOWRAPPER_OFFSET))(factory, reader);
		}

		static ::LitJson::IJsonWrapper* ToWrapper_1(::LitJson::WrapperFactory* factory, ::System::String* json)
		{
			return ((::LitJson::IJsonWrapper*(*)(::LitJson::WrapperFactory*, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_TOWRAPPER_1_OFFSET))(factory, json);
		}

		static ::System::Void RegisterAssemblyName(::System::String* assemblyName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_REGISTERASSEMBLYNAME_OFFSET))(assemblyName);
		}

		static ::System::Void RegisterGenericConvertType(::System::Type* genericType)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_REGISTERGENERICCONVERTTYPE_OFFSET))(genericType);
		}

		static ::System::Void UnregisterExporters()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_UNREGISTEREXPORTERS_OFFSET))();
		}

		static ::System::Void UnregisterImporters()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_UNREGISTERIMPORTERS_OFFSET))();
		}

		static ::System::Boolean CheckStatic(::LitJson::PropertyMetadata prop_data)
		{
			return ((::System::Boolean(*)(::LitJson::PropertyMetadata))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_CHECKSTATIC_OFFSET))(prop_data);
		}

		static ::System::Boolean isAttributeExport(::LitJson::PropertyMetadata prop_data)
		{
			return ((::System::Boolean(*)(::LitJson::PropertyMetadata))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_ISATTRIBUTEEXPORT_OFFSET))(prop_data);
		}

		static ::System::String* ConvertKeyToString(::System::Object* keyStr)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_CONVERTKEYTOSTRING_OFFSET))(keyStr);
		}

		static ::System::Object* ParseKey(::System::String* keyStr, ::System::Type* keyType)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_PARSEKEY_OFFSET))(keyStr, keyType);
		}
	};
}
