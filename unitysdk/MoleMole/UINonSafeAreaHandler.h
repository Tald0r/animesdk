#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine { class Canvas; }

#define MOLEMOLE_UINONSAFEAREAHANDLER_METHOD_6_0B08B4F8E959C85E_OFFSET UNITYSDK_OFFSET(0xCFC1A60)
#define MOLEMOLE_UINONSAFEAREAHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xCFC0A80)
#define MOLEMOLE_UINONSAFEAREAHANDLER_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCFC0A90)
#define MOLEMOLE_UINONSAFEAREAHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xCFC1BE0)
#define MOLEMOLE_UINONSAFEAREAHANDLER_METHOD_6_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0xCFC0AF0)
#define MOLEMOLE_UINONSAFEAREAHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCFC07C0)
#define MOLEMOLE_UINONSAFEAREAHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xCFC0850)
#define MOLEMOLE_UINONSAFEAREAHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCFC09D0)
#define MOLEMOLE_UINONSAFEAREAHANDLER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCFC09F0)

namespace MoleMole
{
	inline static constexpr unsigned int UINonSafeAreaHandler_TypeDefinitionIndex = 43711;

	class UINonSafeAreaHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::Canvas* Field_6_0; // 0x18
		::System::Boolean Field_6_1; // 0x20
		::System::Boolean Field_6_2; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINONSAFEAREAHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINONSAFEAREAHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINONSAFEAREAHANDLER_UPDATE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINONSAFEAREAHANDLER___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void Method_6_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINONSAFEAREAHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINONSAFEAREAHANDLER_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_F7BA13C72A6B3F58()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINONSAFEAREAHANDLER_METHOD_6_F7BA13C72A6B3F58_OFFSET))(this);
		}

		::UnityEngine::Canvas* Method_6_0B08B4F8E959C85E()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINONSAFEAREAHANDLER_METHOD_6_0B08B4F8E959C85E_OFFSET))(this);
		}

		::System::Boolean Method_6_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINONSAFEAREAHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET))(this);
		}
	};
}
