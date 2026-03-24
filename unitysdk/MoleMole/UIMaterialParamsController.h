#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_UIMATERIALPARAMSCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x7478440)
#define MOLEMOLE_UIMATERIALPARAMSCONTROLLER_METHOD_5_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x7478540)
#define MOLEMOLE_UIMATERIALPARAMSCONTROLLER_METHOD_5_674F73509924BD16_OFFSET UNITYSDK_OFFSET(0x74782C0)
#define MOLEMOLE_UIMATERIALPARAMSCONTROLLER_METHOD_5_8CB9BDF340E2FC64_OFFSET UNITYSDK_OFFSET(0x7478B00)
#define MOLEMOLE_UIMATERIALPARAMSCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7478A90)
#define MOLEMOLE_UIMATERIALPARAMSCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x7478CC0)
#define MOLEMOLE_UIMATERIALPARAMSCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x7478220)
#define MOLEMOLE_UIMATERIALPARAMSCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x74784D0)
#define MOLEMOLE_UIMATERIALPARAMSCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7478D30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMaterialParamsController_TypeDefinitionIndex = 46981;

	class UIMaterialParamsController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean floatParam1Enable; // 0x18
		::System::String* floatParamName1; // 0x20
		::System::Single floatParam1; // 0x28
		::System::Boolean floatParam2Enable; // 0x2C
		::System::String* floatParamName2; // 0x30
		::System::Single floatParam2; // 0x38
		::System::Boolean floatParam3Enable; // 0x3C
		::System::String* floatParamName3; // 0x40
		::System::Single floatParam3; // 0x48
		::System::Boolean colorParam1Enable; // 0x4C
		::System::String* colorParamName1; // 0x50
		::UnityEngine::Color colorParam1; // 0x58
		::System::Boolean colorParam2Enable; // 0x68
		::System::String* colorParamName2; // 0x70
		::UnityEngine::Color colorParam2; // 0x78
		::System::Boolean colorParam3Enable; // 0x88
		::System::String* colorParamName3; // 0x90
		::UnityEngine::Color colorParam3; // 0x98
		::System::Boolean vectorParam1Enable; // 0xA8
		::System::String* vectorParamName1; // 0xB0
		::UnityEngine::Vector4 vectorParam1; // 0xB8
		::System::Boolean vectorParam2Enable; // 0xC8
		::System::String* vectorParamName2; // 0xD0
		::UnityEngine::Vector4 vectorParam2; // 0xD8
		::System::Boolean vectorParam3Enable; // 0xE8
		::System::String* vectorParamName3; // 0xF0
		::UnityEngine::Vector4 vectorParam3; // 0xF8
		::System::Boolean autoRefreshOnEnable; // 0x108
		::UnityEngine::MaterialPropertyBlock* Field_5_28; // 0x110
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* renderers; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALPARAMSCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALPARAMSCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALPARAMSCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALPARAMSCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALPARAMSCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALPARAMSCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_8CB9BDF340E2FC64()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALPARAMSCONTROLLER_METHOD_5_8CB9BDF340E2FC64_OFFSET))(this);
		}

		::System::Void Method_5_674F73509924BD16()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALPARAMSCONTROLLER_METHOD_5_674F73509924BD16_OFFSET))(this);
		}

		::System::Void Method_5_33E2FA8E6403B93D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALPARAMSCONTROLLER_METHOD_5_33E2FA8E6403B93D_OFFSET))(this);
		}
	};
}
