#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NEWTONSOFT_JSON_UTILITIES_AOTHELPER_ENSURE_OFFSET UNITYSDK_OFFSET(0x1AD13C90)
#define NEWTONSOFT_JSON_UTILITIES_AOTHELPER_ISFALSE_OFFSET UNITYSDK_OFFSET(0x1AD13DC0)
#define NEWTONSOFT_JSON_UTILITIES_AOTHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD13E30)
#define NEWTONSOFT_JSON_UTILITIES_AOTHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD13E20)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int AotHelper_TypeDefinitionIndex = 6894;

	class AotHelper : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_s_alwaysFalse()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AotHelper_TypeDefinitionIndex)->GetStaticField(0x3200);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_AOTHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_AOTHELPER__CCTOR_OFFSET))();
		}

		static ::System::Void Ensure(::System::Action* action)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_AOTHELPER_ENSURE_OFFSET))(action);
		}

		static ::System::Boolean IsFalse()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_AOTHELPER_ISFALSE_OFFSET))();
		}
	};
}
