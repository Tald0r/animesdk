#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_0_16E4307DCC419505_357;
class Class_1_C2CF07E92698C538;
class Class_1_FA793AB1D49D0132;
class Class_2_60DDD9C206686F44;
class Class_2_A8F5ABF31E066ED4;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class MonoUILayoutAdaptorBase; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_UIMONOCONTROLLER_APPLYLAYOUTBYPLATFORM_OFFSET UNITYSDK_OFFSET(0x8ED7EF0)
#define MOLEMOLE_UIMONOCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x8ED7B70)
#define MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLBUTTON_OFFSET UNITYSDK_OFFSET(0x8ED8510)
#define MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLIMAGE_OFFSET UNITYSDK_OFFSET(0x8ED82E0)
#define MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLRAWIMAGE_OFFSET UNITYSDK_OFFSET(0x8ED8740)
#define MOLEMOLE_UIMONOCONTROLLER_DESTROYVIEW_OFFSET UNITYSDK_OFFSET(0x8ED8C20)
#define MOLEMOLE_UIMONOCONTROLLER_DOUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8ED5910)
#define MOLEMOLE_UIMONOCONTROLLER_HIDE_OFFSET UNITYSDK_OFFSET(0x8ED8A30)
#define MOLEMOLE_UIMONOCONTROLLER_INITMONOUILAYOUTADAPTOR_OFFSET UNITYSDK_OFFSET(0x8ED7BE0)
#define MOLEMOLE_UIMONOCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8ED8B40)
#define MOLEMOLE_UIMONOCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8ED5A50)
#define MOLEMOLE_UIMONOCONTROLLER_SETPARENT_OFFSET UNITYSDK_OFFSET(0x8ED8130)
#define MOLEMOLE_UIMONOCONTROLLER_SHOW_OFFSET UNITYSDK_OFFSET(0x8ED8970)
#define MOLEMOLE_UIMONOCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED5D30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonoController_TypeDefinitionIndex = 44828;

	class UIMonoController : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::MoleMole::UIWindowController* _parentController; // 0x58
		::Class_1_C2CF07E92698C538* _childWindowProxy; // 0x60
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_357*>* _controlObjects; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::MonoUILayoutAdaptorBase*>* _uiLayoutAdaptors; // 0x70
		::System::Boolean _isDestroy; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void SetParent(::MoleMole::UIWindowController* parent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_SETPARENT_OFFSET))(this, parent);
		}

		::Class_2_A8F5ABF31E066ED4* CreatUIControlImage(::UnityEngine::UI::Image* image)
		{
			return ((::Class_2_A8F5ABF31E066ED4*(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLIMAGE_OFFSET))(this, image);
		}

		::Class_2_60DDD9C206686F44* CreatUIControlButton(::UnityEngine::UI::Extension::UIButtonEx* btn)
		{
			return ((::Class_2_60DDD9C206686F44*(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonEx*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLBUTTON_OFFSET))(this, btn);
		}

		::Class_2_CA67A9CEB871FFD3* CreatUIControlRawImage(::UnityEngine::UI::RawImage* rawImage)
		{
			return ((::Class_2_CA67A9CEB871FFD3*(*)(::PVOID, ::UnityEngine::UI::RawImage*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLRAWIMAGE_OFFSET))(this, rawImage);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_HIDE_OFFSET))(this);
		}

		::System::Void InitMonoUILayoutAdaptor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_INITMONOUILAYOUTADAPTOR_OFFSET))(this);
		}

		::System::Void ApplyLayoutByPlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_APPLYLAYOUTBYPLATFORM_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void DoUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_DOUIDESTROY_OFFSET))(this);
		}

		::System::Void DestroyView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_DESTROYVIEW_OFFSET))(this);
		}
	};
}
