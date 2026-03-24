#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CAD4E9467727B0A1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_4D65A0FCDA8137CB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT_ADDMODES_OFFSET UNITYSDK_OFFSET(0x9AA1AE0)
#define MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9AA1BC0)
#define MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA1A40)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraV2Context_TypeDefinitionIndex = 54541;

	class UIMainCityCameraV2Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClose; // 0x28
		::System::Collections::Generic::List_1<::Class_1_4D65A0FCDA8137CB*>* PhotoCameraModes; // 0x30
		::System::Nullable_1<::System::Int32> InitShowPhotoFrameID; // 0x38
		::System::Nullable_1<::Enum_3_CAD4E9467727B0A1> InitCameraModeType; // 0x40
		::System::Boolean IsCursorHide; // 0x48
		::System::Nullable_1<::System::Boolean> IsLoadLastPhotoSetting; // 0x49
		::System::Boolean IsClosePlayFadeoutAnim; // 0x4B
		::System::Boolean IsHideBattleUI; // 0x4C

		::System::Void _ctor(::Il2CppArray<::Class_1_4D65A0FCDA8137CB*>* cameraModes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_4D65A0FCDA8137CB*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT__CTOR_OFFSET))(this, cameraModes);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT__CTOR_1_OFFSET))(this);
		}

		::System::Void AddModes(::Il2CppArray<::Class_1_4D65A0FCDA8137CB*>* cameraModes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_4D65A0FCDA8137CB*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT_ADDMODES_OFFSET))(this, cameraModes);
		}
	};
}
