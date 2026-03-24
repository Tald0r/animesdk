#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_MobileButtonPositionInfo.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PositionType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_SceneType.h"
#include "unitysdk/MoleMole/UIButtonPosHandler_AlignMeta.h"
#include "unitysdk/MoleMole/UIButtonPosHandler_Enum_3_EC9AE06EDE4B4C42.h"
#include "unitysdk/MoleMole/UIButtonPosHandler_Struct_2_729FF1F0AF3FEB7F.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace MoleMole { class ConfigUICommon_Input_ConfigMobilePanelLayout; }
namespace MoleMole { class UIButtonSizeHandler; }
namespace MoleMole { class UserLocalDataItem_OverrideMobileButtonPanel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }

#define MOLEMOLE_UIBUTTONPOSHANDLER_APPLYLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0xD030740)
#define MOLEMOLE_UIBUTTONPOSHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD02D2D0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0xD02D830)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GETLAYOUTRESULT_1_OFFSET UNITYSDK_OFFSET(0xD02F530)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GETLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0xD030B10)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GETPOSHANDLER_OFFSET UNITYSDK_OFFSET(0xD02CFF0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GET_BUTTONTYPE_OFFSET UNITYSDK_OFFSET(0xD02CF30)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GET_POSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD02CF50)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GET_SCENETYPE_OFFSET UNITYSDK_OFFSET(0xD02CF40)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_09B8F368BEF6ADA5_1_OFFSET UNITYSDK_OFFSET(0xD031470)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0xD032D00)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_0B08B4F8E959C85E_OFFSET UNITYSDK_OFFSET(0xD02EA70)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_143E7CF2494EE4D6_1_OFFSET UNITYSDK_OFFSET(0xD031AD0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_143E7CF2494EE4D6_OFFSET UNITYSDK_OFFSET(0xD031760)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_1CCA9681CE0AE7A7_OFFSET UNITYSDK_OFFSET(0xD031140)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_293D61F1DB5EB198_1_OFFSET UNITYSDK_OFFSET(0xD02EE50)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_293D61F1DB5EB198_OFFSET UNITYSDK_OFFSET(0xD02EC00)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_30608A662F7FC43B_OFFSET UNITYSDK_OFFSET(0xD0326C0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0xD0316C0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_5304726C363652C1_OFFSET UNITYSDK_OFFSET(0xD02F2E0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xD02E2D0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_5A19431060A597D2_OFFSET UNITYSDK_OFFSET(0xD032A70)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_5B3FFFC789FC412E_1_OFFSET UNITYSDK_OFFSET(0xD031520)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_5B3FFFC789FC412E_OFFSET UNITYSDK_OFFSET(0xD032DB0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_73B72C9D653C9B5E_1_OFFSET UNITYSDK_OFFSET(0xD030ED0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_73B72C9D653C9B5E_OFFSET UNITYSDK_OFFSET(0xD030C50)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_7CFF6EACC1D121C7_OFFSET UNITYSDK_OFFSET(0xD031E40)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_B277D64CD33FB1C7_OFFSET UNITYSDK_OFFSET(0xD02F0A0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_C4CB00FCBB91C6C4_OFFSET UNITYSDK_OFFSET(0xD02E4B0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xD0322A0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_C7D596A81C8A10AA_OFFSET UNITYSDK_OFFSET(0xD0322B0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_C8E7E15193FC5224_1_OFFSET UNITYSDK_OFFSET(0xD030EC0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_C8E7E15193FC5224_OFFSET UNITYSDK_OFFSET(0xD030C40)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD032660)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_E1A38AE09BB51EC6_OFFSET UNITYSDK_OFFSET(0xD02E430)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xD032F50)
#define MOLEMOLE_UIBUTTONPOSHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD02D570)
#define MOLEMOLE_UIBUTTONPOSHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD02D3D0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD02D710)
#define MOLEMOLE_UIBUTTONPOSHANDLER_SETBUTTONTYPE_OFFSET UNITYSDK_OFFSET(0xD02CF60)
#define MOLEMOLE_UIBUTTONPOSHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD031230)
#define MOLEMOLE_UIBUTTONPOSHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD031210)
#define MOLEMOLE_UIBUTTONPOSHANDLER___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0xD0312C0)
#define MOLEMOLE_UIBUTTONPOSHANDLER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD031350)
#define MOLEMOLE_UIBUTTONPOSHANDLER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD0313E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIButtonPosHandler_TypeDefinitionIndex = 40506;

	class UIButtonPosHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::MoleMole::UIButtonPosHandler*>** StaticGet_Field_6_9()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::UIButtonPosHandler*>**)Il2CppClass::FromTypeDefinitionIndex(UIButtonPosHandler_TypeDefinitionIndex)->GetStaticField(0x431C0);
		}
		static ::System::Single* StaticGet_Field_6_7()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIButtonPosHandler_TypeDefinitionIndex)->GetStaticField(0x10790);
		}
		static ::UnityEngine::Vector2* StaticGet_Field_6_6()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIButtonPosHandler_TypeDefinitionIndex)->GetStaticField(0x10794);
		}
		::System::String* _name; // 0x18
		::MoleMole::ConfigUICommon_Input_ButtonType _buttonTypeV2; // 0x20
		::MoleMole::ConfigUICommon_Input_SceneType _sceneTypeV2; // 0x24
		::MoleMole::ConfigUICommon_Input_PositionType _positionTypeV2; // 0x28
		::MoleMole::UIButtonPosHandler_AlignMeta _horizontalAlignMeta; // 0x30
		::MoleMole::UIButtonPosHandler_AlignMeta _verticalAlignMeta; // 0x58
		::MoleMole::UIButtonSizeHandler* Field_6_8; // 0x80
		::UnityEngine::Canvas* Field_6_10; // 0x88
		::System::Boolean Field_6_11; // 0x90
		::System::Boolean Field_6_12; // 0x91
		::System::Boolean Field_6_13; // 0x92
		::System::Boolean Field_6_14; // 0x93
		::System::Boolean Field_6_15; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER__CCTOR_OFFSET))();
		}

		::MoleMole::ConfigUICommon_Input_ButtonType get_ButtonType()
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GET_BUTTONTYPE_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Input_SceneType get_SceneType()
		{
			return ((::MoleMole::ConfigUICommon_Input_SceneType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GET_SCENETYPE_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Input_PositionType get_PositionType()
		{
			return ((::MoleMole::ConfigUICommon_Input_PositionType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GET_POSITIONTYPE_OFFSET))(this);
		}

		::System::Void SetButtonType(::MoleMole::ConfigUICommon_Input_ButtonType a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_ButtonType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_SETBUTTONTYPE_OFFSET))(this, a1);
		}

		static ::MoleMole::UIButtonPosHandler* GetPosHandler(::System::String* a1)
		{
			return ((::MoleMole::UIButtonPosHandler*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GETPOSHANDLER_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_CALCULATELAYOUT_OFFSET))(this);
		}

		::MoleMole::UIButtonPosHandler_Struct_2_729FF1F0AF3FEB7F GetLayoutResult()
		{
			return ((::MoleMole::UIButtonPosHandler_Struct_2_729FF1F0AF3FEB7F(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GETLAYOUTRESULT_OFFSET))(this);
		}

		::MoleMole::UIButtonPosHandler_Struct_2_729FF1F0AF3FEB7F GetLayoutResult_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::MoleMole::UIButtonPosHandler_Struct_2_729FF1F0AF3FEB7F(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GETLAYOUTRESULT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ApplyLayoutResult(::MoleMole::UIButtonPosHandler_Struct_2_729FF1F0AF3FEB7F a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIButtonPosHandler_Struct_2_729FF1F0AF3FEB7F))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_APPLYLAYOUTRESULT_OFFSET))(this, a1);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Single Method_6_293D61F1DB5EB198()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_293D61F1DB5EB198_OFFSET))(this);
		}

		::System::Int32 Method_6_37D0382D0C30A2DC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_37D0382D0C30A2DC_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_73B72C9D653C9B5E()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_73B72C9D653C9B5E_OFFSET))(this);
		}

		::System::Void Method_6_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_568AE7A1499723FD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_568AE7A1499723FD_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_73B72C9D653C9B5E_1()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_73B72C9D653C9B5E_1_OFFSET))(this);
		}

		::UnityEngine::Canvas* Method_6_0B08B4F8E959C85E()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_0B08B4F8E959C85E_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* Method_6_143E7CF2494EE4D6()
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_143E7CF2494EE4D6_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_30608A662F7FC43B()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_30608A662F7FC43B_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* Method_6_143E7CF2494EE4D6_1()
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_143E7CF2494EE4D6_1_OFFSET))(this);
		}

		::System::Int32 Method_6_09B8F368BEF6ADA5()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_09B8F368BEF6ADA5_OFFSET))(this);
		}

		::MoleMole::UIButtonPosHandler_Enum_3_EC9AE06EDE4B4C42 Method_6_E1A38AE09BB51EC6()
		{
			return ((::MoleMole::UIButtonPosHandler_Enum_3_EC9AE06EDE4B4C42(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_E1A38AE09BB51EC6_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Input_ConfigMobilePanelLayout* Method_6_5A19431060A597D2()
		{
			return ((::MoleMole::ConfigUICommon_Input_ConfigMobilePanelLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_5A19431060A597D2_OFFSET))(this);
		}

		::System::Int32 Method_6_09B8F368BEF6ADA5_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_09B8F368BEF6ADA5_1_OFFSET))(this);
		}

		::UnityEngine::Vector2Int Method_6_5B3FFFC789FC412E()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_5B3FFFC789FC412E_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_C7D596A81C8A10AA()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_C7D596A81C8A10AA_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_7CFF6EACC1D121C7()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_7CFF6EACC1D121C7_OFFSET))(this);
		}

		::System::Boolean Method_6_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_1CCA9681CE0AE7A7(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_1CCA9681CE0AE7A7_OFFSET))(this, a1, a2);
		}

		::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo Method_6_C4CB00FCBB91C6C4()
		{
			return ((::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_C4CB00FCBB91C6C4_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_C8E7E15193FC5224()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_C8E7E15193FC5224_OFFSET))(this);
		}

		::UnityEngine::Vector2Int Method_6_5B3FFFC789FC412E_1()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_5B3FFFC789FC412E_1_OFFSET))(this);
		}

		::System::Single Method_6_B277D64CD33FB1C7()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_B277D64CD33FB1C7_OFFSET))(this);
		}

		::System::Single Method_6_5304726C363652C1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_5304726C363652C1_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_C8E7E15193FC5224_1()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_C8E7E15193FC5224_1_OFFSET))(this);
		}

		::System::Single Method_6_293D61F1DB5EB198_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_293D61F1DB5EB198_1_OFFSET))(this);
		}
	};
}
