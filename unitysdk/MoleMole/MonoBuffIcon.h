#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/MonoInLevelBase.h"

class Class_1_8289F2785D9AA990;
class Class_2_8CAD669444D1F6DE;
namespace DG::Tweening { class Tweener; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOBUFFICON_ENABLENUMBERTEXT_OFFSET UNITYSDK_OFFSET(0x6EA5480)
#define MOLEMOLE_MONOBUFFICON_GETISMORE_OFFSET UNITYSDK_OFFSET(0x6EA66F0)
#define MOLEMOLE_MONOBUFFICON_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x6EA4500)
#define MOLEMOLE_MONOBUFFICON_GET_BUFFNUMBER_OFFSET UNITYSDK_OFFSET(0x6EA4510)
#define MOLEMOLE_MONOBUFFICON_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x6EA6680)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x6EA7CD0)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_20E8013D4AB67E17_OFFSET UNITYSDK_OFFSET(0x6EA58D0)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_2C1C2A8E63DB0F10_OFFSET UNITYSDK_OFFSET(0x6EA7CE0)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x6EA7150)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_61113270C4B9E4F4_OFFSET UNITYSDK_OFFSET(0x6EA5130)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x6EA55D0)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_7849F7E288B51663_OFFSET UNITYSDK_OFFSET(0x6EA7890)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_7D9FB684EF17D12D_OFFSET UNITYSDK_OFFSET(0x6EA6350)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x6EA7CC0)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x6EA7CB0)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x6EA7810)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x6EA64A0)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_98CD66A7F3C102A5_OFFSET UNITYSDK_OFFSET(0x6EA6A00)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x6EA7CA0)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x6EA7C90)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x6EA5DA0)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x6EA72A0)
#define MOLEMOLE_MONOBUFFICON_METHOD_6_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x6EA7050)
#define MOLEMOLE_MONOBUFFICON_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6EA7690)
#define MOLEMOLE_MONOBUFFICON_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x6EA5F70)
#define MOLEMOLE_MONOBUFFICON_REFRESHNUMBER_OFFSET UNITYSDK_OFFSET(0x6EA7540)
#define MOLEMOLE_MONOBUFFICON_REPLACEBUFFIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x6EA6920)
#define MOLEMOLE_MONOBUFFICON_RESETNUMBER_OFFSET UNITYSDK_OFFSET(0x6EA75B0)
#define MOLEMOLE_MONOBUFFICON_SETCUSTOMNUM_OFFSET UNITYSDK_OFFSET(0x6EA7620)
#define MOLEMOLE_MONOBUFFICON_SETUPMORESTATE_OFFSET UNITYSDK_OFFSET(0x6EA5C70)
#define MOLEMOLE_MONOBUFFICON_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x6EA4520)
#define MOLEMOLE_MONOBUFFICON_SWITCHTOBUFF_OFFSET UNITYSDK_OFFSET(0x6EA6750)
#define MOLEMOLE_MONOBUFFICON_TICK_OFFSET UNITYSDK_OFFSET(0x6EA6C40)
#define MOLEMOLE_MONOBUFFICON__CCTOR_OFFSET UNITYSDK_OFFSET(0x6EA77C0)
#define MOLEMOLE_MONOBUFFICON__CTOR_OFFSET UNITYSDK_OFFSET(0x6EA7710)
#define MOLEMOLE_MONOBUFFICON___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6EA7800)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBuffIcon_TypeDefinitionIndex = 62647;

	class MonoBuffIcon : public ::MoleMole::MonoInLevelBase
	{
	public:
		static ::System::Int32* StaticGet_MULTIPLE_ROW_BUFF_ICON_MAX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoBuffIcon_TypeDefinitionIndex)->GetStaticField(0xA730);
		}
		static ::System::Int32* StaticGet_BUFF_ICON_MAX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoBuffIcon_TypeDefinitionIndex)->GetStaticField(0xA734);
		}
		// static const ::System::Single Field_6_13; // 0x0
		// static const ::System::String* BUFF_ICON_PATH; // 0x0
		// static const ::System::String* BUFF_ICON_PREFEX_PATH; // 0x0
		// static const ::System::String* FADE_OUT_ANI; // 0x0
		// static const ::System::String* QUEUE_FADE_IN_ANI; // 0x0
		// static const ::System::String* QUEUE_FADE_OUT_ANI; // 0x0
		// static const ::System::String* FADE_IN_ANI; // 0x0
		// static const ::System::String* REPLACE_ANI; // 0x0
		::System::Int32 Field_6_0; // 0x20
		::UnityEngine::UI::Image* Field_6_1; // 0x28
		::UnityEngine::GameObject* Field_6_2; // 0x30
		::UnityEngine::UI::Image* Field_6_3; // 0x38
		::UnityEngine::Animation* Field_6_4; // 0x40
		::UnityEngine::Transform* Field_6_5; // 0x48
		::UnityEngine::Transform* Field_6_6; // 0x50
		::UnityEngine::GameObject* Field_6_7; // 0x58
		::UnityEngine::Transform* Field_6_8; // 0x60
		::UnityEngine::Transform* Field_6_9; // 0x68
		::System::Boolean enableNumberText; // 0x70
		::System::Boolean enableTimeDurationShow; // 0x71
		::System::Boolean Field_6_12; // 0x72
		::System::Boolean Field_6_14; // 0x73
		::System::Single Field_6_15; // 0x74
		::System::Single Field_6_16; // 0x78
		::UnityEngine::Animation* Field_6_17; // 0x80
		::DG::Tweening::Tweener* Field_6_18; // 0x88
		::System::Int32 removeIndex; // 0x90
		::System::Int32 Field_6_20; // 0x94
		::UnityEngine::UI::Text* Field_6_21; // 0x98
		::System::UInt32 Field_6_31; // 0xA0
		::Class_1_8289F2785D9AA990* Field_6_32; // 0xA8
		::System::Int32 Field_6_33; // 0xB0
		::System::Collections::Generic::List_1<::Class_2_8CAD669444D1F6DE*>* Field_6_34; // 0xB8
		::UnityEngine::Animation* Field_6_35; // 0xC0
		::Foundation::Coroutine::CoroutineHandle Field_6_36; // 0xC8
		::System::Action* Field_6_37; // 0xD0
		::System::Int32 Field_6_38; // 0xD8
		::System::Action* Field_6_39; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON__CCTOR_OFFSET))();
		}

		::System::Int32 get_BuffID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_GET_BUFFID_OFFSET))(this);
		}

		::System::Int32 get_BuffNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_GET_BUFFNUMBER_OFFSET))(this);
		}

		::System::Void SetupView(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Action* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_SETUPVIEW_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void OnRemove(::System::Action* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_ONREMOVE_OFFSET))(this, a1, a2);
		}

		::System::Void Interrupt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_INTERRUPT_OFFSET))(this);
		}

		::System::Void SetupMoreState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_SETUPMORESTATE_OFFSET))(this, a1);
		}

		::System::Boolean GetIsMore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_GETISMORE_OFFSET))(this);
		}

		::System::Boolean SwitchToBuff(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_SWITCHTOBUFF_OFFSET))(this, a1);
		}

		::System::Void ReplaceBuffImmediate(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_REPLACEBUFFIMMEDIATE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_TICK_OFFSET))(this);
		}

		::System::Void EnableNumberText(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_ENABLENUMBERTEXT_OFFSET))(this, a1);
		}

		::System::Void RefreshNumber()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_REFRESHNUMBER_OFFSET))(this);
		}

		::System::Void ResetNumber()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_RESETNUMBER_OFFSET))(this);
		}

		::System::Void SetCustomNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_SETCUSTOMNUM_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Int32 Method_6_95780ED94B90ED36()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_95780ED94B90ED36_OFFSET))(this);
		}

		::System::Single Method_6_FC5102551AF3CB1A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_FC5102551AF3CB1A_OFFSET))(this);
		}

		::System::Void Method_6_F79D5EC57FBF426E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_F79D5EC57FBF426E_OFFSET))(this);
		}

		::System::Void Method_6_C114A1F8E08B6F92(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_C114A1F8E08B6F92_OFFSET))(this, a1);
		}

		::System::Void Method_6_C114A1F8E08B6F92_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_C114A1F8E08B6F92_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_61113270C4B9E4F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_61113270C4B9E4F4_OFFSET))(this);
		}

		::System::Void Method_6_6055A93732CC885D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_6055A93732CC885D_OFFSET))(this);
		}

		::System::Void Method_6_655DDB722F1FDE73()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_655DDB722F1FDE73_OFFSET))(this);
		}

		::System::Void Method_6_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_6_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_6_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_832295EC279E5994_1_OFFSET))(this);
		}

		::System::Void Method_6_98CD66A7F3C102A5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_98CD66A7F3C102A5_OFFSET))(this);
		}

		::System::Void Method_6_F978A1D172468895()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_F978A1D172468895_OFFSET))(this);
		}

		::System::Void Method_6_20E8013D4AB67E17()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_20E8013D4AB67E17_OFFSET))(this);
		}

		::System::Boolean Method_6_7D9FB684EF17D12D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_7D9FB684EF17D12D_OFFSET))(this);
		}

		::System::Boolean Method_6_7849F7E288B51663()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_7849F7E288B51663_OFFSET))(this);
		}

		::System::Void Method_6_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_6_2C1C2A8E63DB0F10(::Class_2_8CAD669444D1F6DE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8CAD669444D1F6DE*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_METHOD_6_2C1C2A8E63DB0F10_OFFSET))(this, a1);
		}
	};
}
