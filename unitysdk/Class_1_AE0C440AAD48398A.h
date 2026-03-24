#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/Enum_3_C70BB0B7FF29E172.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_139A5DBBF3EFD181;
class Class_1_40D4DB53AC684530;
class Class_1_A7ED02430811372E;
class Class_1_BCB34C7DF4338509;
class Class_1_D375C91CCE5D3999;
class Class_2_60DDD9C206686F44;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class ActivityWidgetContext; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIActivityEnterBasePageController; }
namespace MoleMole { class UIActivityNormalContextBase; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_1_AE0C440AAD48398A_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x8BED8F0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_1970D555A322B381_OFFSET UNITYSDK_OFFSET(0x8BEF3F0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x8BEE4E0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x8BEDFE0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_3B7E34AFF29E114F_OFFSET UNITYSDK_OFFSET(0x8BEE130)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x8BED970)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_49C474C148E9799A_OFFSET UNITYSDK_OFFSET(0x8BEE3A0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x8BEDBF0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_5B2DBD7227D80209_OFFSET UNITYSDK_OFFSET(0x8BEDB70)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_6ACED803F7335185_OFFSET UNITYSDK_OFFSET(0x8BEDEB0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_82A2A07F34D1DE20_OFFSET UNITYSDK_OFFSET(0x8BEEED0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x8BEF300)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8BEDB00)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x8BED7F0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_9E7915C7932BEC0C_OFFSET UNITYSDK_OFFSET(0x8BEECC0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_A28B2E334B3DC91D_OFFSET UNITYSDK_OFFSET(0x8BEE1B0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_BDE55053EB71D291_OFFSET UNITYSDK_OFFSET(0x8BEE570)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_BF78C820754A28B7_OFFSET UNITYSDK_OFFSET(0x8BED5F0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_C75C9C74F9D34F86_OFFSET UNITYSDK_OFFSET(0x8BED6A0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_C85DC39BF93C8913_OFFSET UNITYSDK_OFFSET(0x8BEDCF0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_CBEC6076E6252447_OFFSET UNITYSDK_OFFSET(0x8BEDDB0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x8BEF250)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_DC9AC2A569AA7B37_OFFSET UNITYSDK_OFFSET(0x8BED310)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x8BED780)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x8BEF3C0)
#define CLASS_1_AE0C440AAD48398A_METHOD_1_F758025BA18406B7_OFFSET UNITYSDK_OFFSET(0x8BEE780)
#define CLASS_1_AE0C440AAD48398A__CTOR_OFFSET UNITYSDK_OFFSET(0x8BED110)

inline static constexpr unsigned int Class_1_AE0C440AAD48398A_TypeDefinitionIndex = 51296;

class Class_1_AE0C440AAD48398A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIWidgetController*>* Field_1_12; // 0x10
	::Class_1_BCB34C7DF4338509* Field_1_1; // 0x18
	::Class_1_139A5DBBF3EFD181* Field_1_0; // 0x20
	::System::Action* Field_1_18; // 0x28
	::MoleMole::UIActivityNormalContextBase* Field_1_16; // 0x30
	::MoleMole::MonoGamepadModule* Field_1_3; // 0x38
	::UnityEngine::RectTransform* Field_1_9; // 0x40
	::System::Collections::Generic::Dictionary_2<::Enum_3_C70BB0B7FF29E172, ::Class_1_A7ED02430811372E*>* Field_1_4; // 0x48
	::MoleMole::UIActivityNormalContextBase* Field_1_15; // 0x50
	::System::String* Field_1_21; // 0x58
	::Class_2_60DDD9C206686F44* Field_1_6; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ActivityWidgetContext*>* Field_1_13; // 0x68
	::MoleMole::MonoGamepadModule* Field_1_8; // 0x70
	::System::Collections::Generic::List_1<::Class_1_A7ED02430811372E*>* Field_1_5; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_10; // 0x80
	::Class_2_9E3E3CDA608A4F58* Field_1_7; // 0x88
	::Class_1_40D4DB53AC684530* Field_1_14; // 0x90
	::MoleMole::UIActivityEnterBasePageController* Field_1_11; // 0x98
	::MoleMole::UIActivityCompRewardBtnGroupWidgetController* Field_1_2; // 0xA0
	::Foundation::Coroutine::CoroutineHandle Field_1_19; // 0xA8
	::System::Int32 Field_1_17; // 0xAC
	::System::Boolean Field_1_20; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DC9AC2A569AA7B37(::Class_1_D375C91CCE5D3999* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_DC9AC2A569AA7B37_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_139A5DBBF3EFD181* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_139A5DBBF3EFD181*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_1_3D6722B9F8F20694()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_3D6722B9F8F20694_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_5B2DBD7227D80209()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_5B2DBD7227D80209_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::Enum_3_C70BB0B7FF29E172 Method_1_BF78C820754A28B7(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::Enum_3_C70BB0B7FF29E172(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_BF78C820754A28B7_OFFSET))(this, a1);
	}

	::Class_1_A7ED02430811372E* Method_1_C85DC39BF93C8913(::System::Int32 a1)
	{
		return ((::Class_1_A7ED02430811372E*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_C85DC39BF93C8913_OFFSET))(this, a1);
	}

	::System::Void Method_1_CBEC6076E6252447(::MoleMole::UIActivityCompRewardBtnGroupWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityCompRewardBtnGroupWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_CBEC6076E6252447_OFFSET))(this, a1);
	}

	::System::Void Method_1_6ACED803F7335185(::MoleMole::UIBaseController* a1, ::UnityEngine::RectTransform* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_6ACED803F7335185_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::Class_1_A7ED02430811372E* Method_1_C75C9C74F9D34F86(::Enum_3_C70BB0B7FF29E172 a1, ::System::Int32 a2)
	{
		return ((::Class_1_A7ED02430811372E*(*)(::PVOID, ::Enum_3_C70BB0B7FF29E172, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_C75C9C74F9D34F86_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3B7E34AFF29E114F(::MoleMole::UIActivityNormalContextBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIActivityNormalContextBase*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_3B7E34AFF29E114F_OFFSET))(this, a1);
	}

	::System::Void Method_1_A28B2E334B3DC91D(::UnityEngine::Transform* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_A28B2E334B3DC91D_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_49C474C148E9799A(::Class_1_A7ED02430811372E* a1, ::Class_1_A7ED02430811372E* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_A7ED02430811372E*, ::Class_1_A7ED02430811372E*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_49C474C148E9799A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_BDE55053EB71D291(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_BDE55053EB71D291_OFFSET))(this, a1);
	}

	::System::Void Method_1_9E7915C7932BEC0C(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_9E7915C7932BEC0C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_82A2A07F34D1DE20(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_82A2A07F34D1DE20_OFFSET))(this, a1);
	}

	::MoleMole::UIWidgetController* Method_1_F758025BA18406B7(::Class_1_A7ED02430811372E* a1)
	{
		return ((::MoleMole::UIWidgetController*(*)(::PVOID, ::Class_1_A7ED02430811372E*))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_F758025BA18406B7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::MoleMole::UIActivityCompWeekRewardBtnWidgetController* Method_1_1970D555A322B381(::System::Int32 a1)
	{
		return ((::MoleMole::UIActivityCompWeekRewardBtnWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE0C440AAD48398A_METHOD_1_1970D555A322B381_OFFSET))(this, a1);
	}
};
