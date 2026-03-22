#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/CanvasScaler.h"

#define MOLEMOLE_NAPCANVASSCALER_CALLHANDLE_OFFSET UNITYSDK_OFFSET(0x67C7760)
#define MOLEMOLE_NAPCANVASSCALER_METHOD_7_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x67C7820)
#define MOLEMOLE_NAPCANVASSCALER_METHOD_7_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x67C78F0)
#define MOLEMOLE_NAPCANVASSCALER_METHOD_7_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x67C7890)
#define MOLEMOLE_NAPCANVASSCALER_METHOD_7_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x67C7900)
#define MOLEMOLE_NAPCANVASSCALER__CTOR_OFFSET UNITYSDK_OFFSET(0x67C77D0)

namespace MoleMole
{
	inline static constexpr unsigned int NapCanvasScaler_TypeDefinitionIndex = 40894;

	class NapCanvasScaler : public ::UnityEngine::UI::CanvasScaler
	{
	public:
		::System::Boolean Field_7_0; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCANVASSCALER__CTOR_OFFSET))(this);
		}

		::System::Void CallHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCANVASSCALER_CALLHANDLE_OFFSET))(this);
		}

		::System::Void Method_7_805C56F44231AEF9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCANVASSCALER_METHOD_7_805C56F44231AEF9_OFFSET))(this);
		}

		::System::Void Method_7_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCANVASSCALER_METHOD_7_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_7_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCANVASSCALER_METHOD_7_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		::System::Boolean Method_7_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCANVASSCALER_METHOD_7_F0088C88851A7DFB_OFFSET))(this);
		}
	};
}
