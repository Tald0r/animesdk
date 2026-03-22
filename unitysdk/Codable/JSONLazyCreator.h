#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode.h"
#include "unitysdk/Codable/JSONNodeType.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
#include "unitysdk/Codable/JSONTextMode.h"

namespace Codable { class JSONArray; }
namespace Codable { class JSONObject; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CODABLE_JSONLAZYCREATOR_ADD_1_OFFSET UNITYSDK_OFFSET(0x195EA6B0)
#define CODABLE_JSONLAZYCREATOR_ADD_OFFSET UNITYSDK_OFFSET(0x195EA570)
#define CODABLE_JSONLAZYCREATOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x195EA840)
#define CODABLE_JSONLAZYCREATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x195EA1A0)
#define CODABLE_JSONLAZYCREATOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x195EA860)
#define CODABLE_JSONLAZYCREATOR_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x195EAD10)
#define CODABLE_JSONLAZYCREATOR_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x195EABF0)
#define CODABLE_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x195EAAC0)
#define CODABLE_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x195EA990)
#define CODABLE_JSONLAZYCREATOR_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x195EA870)
#define CODABLE_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x195EAE30)
#define CODABLE_JSONLAZYCREATOR_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x195EA3D0)
#define CODABLE_JSONLAZYCREATOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x195EA240)
#define CODABLE_JSONLAZYCREATOR_GET_TAG_OFFSET UNITYSDK_OFFSET(0x195EA190)
#define CODABLE_JSONLAZYCREATOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x195EA800)
#define CODABLE_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x195EA820)
#define CODABLE_JSONLAZYCREATOR_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x195EAC80)
#define CODABLE_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x195EAB50)
#define CODABLE_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x195EAA20)
#define CODABLE_JSONLAZYCREATOR_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x195EA900)
#define CODABLE_JSONLAZYCREATOR_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x195EA420)
#define CODABLE_JSONLAZYCREATOR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x195EA290)
#define CODABLE_JSONLAZYCREATOR_SET_OFFSET UNITYSDK_OFFSET(0x195EA1E0)
#define CODABLE_JSONLAZYCREATOR_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x195EAF60)
#define CODABLE_JSONLAZYCREATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x195EA1D0)
#define CODABLE_JSONLAZYCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x195EA1C0)

namespace Codable
{
	inline static constexpr unsigned int JSONLazyCreator_TypeDefinitionIndex = 33416;

	class JSONLazyCreator : public ::Codable::JSONNode
	{
	public:
		::System::String* m_Key; // 0x10
		::Codable::JSONNode* m_Node; // 0x18

		::System::Void _ctor(::Codable::JSONNode* aNode)
		{
			return ((::System::Void(*)(::PVOID, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR__CTOR_OFFSET))(this, aNode);
		}

		::System::Void _ctor_1(::Codable::JSONNode* aNode, ::System::String* aKey)
		{
			return ((::System::Void(*)(::PVOID, ::Codable::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR__CTOR_1_OFFSET))(this, aNode, aKey);
		}

		::Codable::JSONNodeType get_Tag()
		{
			return ((::Codable::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GET_TAG_OFFSET))(this);
		}

		::Codable::JSONNode_Enumerator GetEnumerator()
		{
			return ((::Codable::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Set(::Codable::JSONNode* aVal)
		{
			return ((::System::Void(*)(::PVOID, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_SET_OFFSET))(this, aVal);
		}

		::Codable::JSONNode* get_Item(::System::Int32 aIndex)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GET_ITEM_OFFSET))(this, aIndex);
		}

		::System::Void set_Item(::System::Int32 aIndex, ::Codable::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_SET_ITEM_OFFSET))(this, aIndex, value);
		}

		::Codable::JSONNode* get_Item_1(::System::String* aKey)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GET_ITEM_1_OFFSET))(this, aKey);
		}

		::System::Void set_Item_1(::System::String* aKey, ::Codable::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_SET_ITEM_1_OFFSET))(this, aKey, value);
		}

		::System::Void Add(::Codable::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_ADD_OFFSET))(this, aItem);
		}

		::System::Void Add_1(::System::String* aKey, ::Codable::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_ADD_1_OFFSET))(this, aKey, aItem);
		}

		static ::System::Boolean op_Equality(::Codable::JSONLazyCreator* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::Codable::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::Codable::JSONLazyCreator* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::Codable::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_SET_ASINT_OFFSET))(this, value);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET))(this, value);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_SET_ASBOOL_OFFSET))(this, value);
		}

		::Codable::JSONArray* get_AsArray()
		{
			return ((::Codable::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GET_ASARRAY_OFFSET))(this);
		}

		::Codable::JSONObject* get_AsObject()
		{
			return ((::Codable::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::Codable::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::Codable::JSONTextMode))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}
	};
}
