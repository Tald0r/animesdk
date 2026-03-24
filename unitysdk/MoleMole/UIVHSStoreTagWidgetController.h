#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_C7232E5855DD3CA6;
class Class_2_CE905445948732C1_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVHSStoreTagWidgetController_Data; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_AFTERTAGIDCHANGE_OFFSET UNITYSDK_OFFSET(0x9919760)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_CALALLTAGSUCCESS_OFFSET UNITYSDK_OFFSET(0x99192B0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_CALTAGLAYER_OFFSET UNITYSDK_OFFSET(0x9918D50)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_CALVHSATLEASTMATCHONETAG_OFFSET UNITYSDK_OFFSET(0x99190F0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_GET__DATA_OFFSET UNITYSDK_OFFSET(0x9919900)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x99184B0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x99186C0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9918550)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9918360)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9918400)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_PLAYHIGHLIGHTTAGANIM_OFFSET UNITYSDK_OFFSET(0x9919680)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_REFRESHLAYER_OFFSET UNITYSDK_OFFSET(0x99189A0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_REFRESHTAGLAYER_OFFSET UNITYSDK_OFFSET(0x9916BD0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_SET__DATA_OFFSET UNITYSDK_OFFSET(0x99188E0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9919960)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9919910)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x99199A0)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x9919A10)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9919A90)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9919B10)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9919B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreTagWidgetController_TypeDefinitionIndex = 60068;

	class UIVHSStoreTagWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::String** StaticGet_HighlightAnimName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIVHSStoreTagWidgetController_TypeDefinitionIndex)->GetStaticField(0x34A70);
		}
		::Class_2_C7232E5855DD3CA6* _view; // 0x2D0
		::System::Boolean _first; // 0x2D8
		::MoleMole::UIVHSStoreTagWidgetController_Data* __data; // 0x2E0
		::System::Int32 _trendingLayer; // 0x2E8
		::System::Threading::CancellationTokenSource* _tagRefreshCts; // 0x2F0
		::System::Boolean _tagRefreshDone; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshTagLayer(::System::Collections::Generic::IReadOnlyList_1<::Class_2_CE905445948732C1_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D*>* selectedVhs, ::System::Single animDelayTime, ::System::Boolean skipAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_2_CE905445948732C1_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_REFRESHTAGLAYER_OFFSET))(this, selectedVhs, animDelayTime, skipAnim);
		}

		static ::System::Boolean CalVhsAtLeastMatchOneTag(::System::Int32 vhsId, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* tagIds)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_CALVHSATLEASTMATCHONETAG_OFFSET))(vhsId, tagIds);
		}

		static ::System::Int32 CalTagLayer(::System::Int32 tagId, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* selectedVhs)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_CALTAGLAYER_OFFSET))(tagId, selectedVhs);
		}

		static ::System::Boolean CalAllTagSuccess(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* tags, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* selectedVhs)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_CALALLTAGSUCCESS_OFFSET))(tags, selectedVhs);
		}

		::System::Void RefreshLayer(::System::Int32 trendingLayer, ::System::Single animDelayTime, ::System::Boolean skipAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_REFRESHLAYER_OFFSET))(this, trendingLayer, animDelayTime, skipAnim);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid PlayHighlightTagAnim(::System::Boolean highlight, ::System::Single animDelayTime, ::System::Boolean skipAnim, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_PLAYHIGHLIGHTTAGANIM_OFFSET))(this, highlight, animDelayTime, skipAnim, cancellationToken);
		}

		::System::Void AfterTagIDChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_AFTERTAGIDCHANGE_OFFSET))(this);
		}

		::MoleMole::UIVHSStoreTagWidgetController_Data* get__data()
		{
			return ((::MoleMole::UIVHSStoreTagWidgetController_Data*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_GET__DATA_OFFSET))(this);
		}

		::System::Void set__data(::MoleMole::UIVHSStoreTagWidgetController_Data* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSStoreTagWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_SET__DATA_OFFSET))(this, value);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
