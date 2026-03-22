#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define SIMPLEJSON_JSON_PARSE_OFFSET UNITYSDK_OFFSET(0x1942E3D0)
#define SIMPLEJSON_JSON__CCTOR_OFFSET UNITYSDK_OFFSET(0x1942E4F0)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSON_TypeDefinitionIndex = 7870;

	class JSON : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_static_parse_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JSON_TypeDefinitionIndex)->GetStaticField(0x6D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIMPLEJSON_JSON__CCTOR_OFFSET))();
		}

		static ::SimpleJSON::JSONNode* Parse(::System::String* aJSON)
		{
			return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSON_PARSE_OFFSET))(aJSON);
		}
	};
}
