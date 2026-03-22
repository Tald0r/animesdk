#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CAD4E9467727B0A1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_85B1F6533DDB20EA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT_ADDMODES_OFFSET UNITYSDK_OFFSET(0x86FE6E0)
#define MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x86FE7C0)
#define MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x86FE640)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraV2Context_TypeDefinitionIndex = 44671;

	class UIMainCityCameraV2Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_85B1F6533DDB20EA*>* PhotoCameraModes; // 0x28
		::System::Action* OnClose; // 0x30
		::System::Nullable_1<::Enum_3_CAD4E9467727B0A1> InitCameraModeType; // 0x38
		::System::Nullable_1<::System::Int32> InitShowPhotoFrameID; // 0x40
		::System::Boolean IsHideBattleUI; // 0x48
		::System::Boolean IsCursorHide; // 0x49
		::System::Nullable_1<::System::Boolean> IsLoadLastPhotoSetting; // 0x4A
		::System::Boolean IsClosePlayFadeoutAnim; // 0x4C

		::System::Void _ctor(::Il2CppArray<::Class_1_85B1F6533DDB20EA*>* cameraModes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_85B1F6533DDB20EA*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT__CTOR_OFFSET))(this, cameraModes);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT__CTOR_1_OFFSET))(this);
		}

		::System::Void AddModes(::Il2CppArray<::Class_1_85B1F6533DDB20EA*>* cameraModes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_85B1F6533DDB20EA*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT_ADDMODES_OFFSET))(this, cameraModes);
		}
	};
}
