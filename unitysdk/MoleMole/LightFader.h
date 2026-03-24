#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Light; }

#define MOLEMOLE_LIGHTFADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB83E850)
#define MOLEMOLE_LIGHTFADER_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xB83F050)
#define MOLEMOLE_LIGHTFADER_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB83F090)
#define MOLEMOLE_LIGHTFADER_METHOD_1_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0xB83ED80)
#define MOLEMOLE_LIGHTFADER_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xB83ECD0)
#define MOLEMOLE_LIGHTFADER_METHOD_1_479B61BD3C7A43CC_OFFSET UNITYSDK_OFFSET(0xB83EB00)
#define MOLEMOLE_LIGHTFADER_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xB83EEB0)
#define MOLEMOLE_LIGHTFADER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB83E900)
#define MOLEMOLE_LIGHTFADER__CTOR_OFFSET UNITYSDK_OFFSET(0xB83EAF0)

namespace MoleMole
{
	inline static constexpr unsigned int LightFader_TypeDefinitionIndex = 53772;

	class LightFader : public ::System::Object
	{
	public:
		::UnityEngine::Light* light; // 0x10
		::System::Int32 lightIndex; // 0x18
		::System::Single _origIntensity; // 0x1C
		::System::Single _startIntensity; // 0x20
		::System::Int32 lightInstanceId; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_DISPOSE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_TOSTRING_OFFSET))(this);
		}

		::System::Void Method_1_479B61BD3C7A43CC(::UnityEngine::Light* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_METHOD_1_479B61BD3C7A43CC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_479759059E440327(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_METHOD_1_479759059E440327_OFFSET))(this, a1);
		}

		::System::Void Method_1_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_METHOD_1_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_1_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_METHOD_1_128774387667156B_OFFSET))(this);
		}

		::System::Void Method_1_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
		}
	};
}
