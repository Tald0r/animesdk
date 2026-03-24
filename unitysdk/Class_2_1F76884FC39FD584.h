#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A01CE0B13E11F09E.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_1_5A585DEB704A07E2;
class Class_2_777A5D016ADC7368;
namespace Foundation { template <typename T> class ObjectPool_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UITabButton; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_1F76884FC39FD584_BINDNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x9F2B470)
#define CLASS_2_1F76884FC39FD584_GET_CURSELECTKEY_OFFSET UNITYSDK_OFFSET(0x9F2AE80)
#define CLASS_2_1F76884FC39FD584_GET_ORDEREDKEYS_OFFSET UNITYSDK_OFFSET(0x9F2AEA0)
#define CLASS_2_1F76884FC39FD584_GET_TABBUTTONCOUNT_OFFSET UNITYSDK_OFFSET(0x9F2AEC0)
#define CLASS_2_1F76884FC39FD584_METHOD_2_03BE4DF8DCCB5848_OFFSET UNITYSDK_OFFSET(0x9F2C3A0)
#define CLASS_2_1F76884FC39FD584_METHOD_2_0E9B12A021FE434E_OFFSET UNITYSDK_OFFSET(0x9F2BFD0)
#define CLASS_2_1F76884FC39FD584_METHOD_2_0F9D9B60BD2DCB59_OFFSET UNITYSDK_OFFSET(0x9F2C1A0)
#define CLASS_2_1F76884FC39FD584_METHOD_2_1266A942BF66AA3D_OFFSET UNITYSDK_OFFSET(0x9F2BF30)
#define CLASS_2_1F76884FC39FD584_METHOD_2_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0x9F2B8A0)
#define CLASS_2_1F76884FC39FD584_METHOD_2_18B39419CD3E2352_OFFSET UNITYSDK_OFFSET(0x9F2CAD0)
#define CLASS_2_1F76884FC39FD584_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x9F2BEB0)
#define CLASS_2_1F76884FC39FD584_METHOD_2_1A7A6329D9446CE2_OFFSET UNITYSDK_OFFSET(0x9F2C320)
#define CLASS_2_1F76884FC39FD584_METHOD_2_60AB29E4EE562DBB_OFFSET UNITYSDK_OFFSET(0x9F2BB50)
#define CLASS_2_1F76884FC39FD584_METHOD_2_66C85B3A070A8363_OFFSET UNITYSDK_OFFSET(0x9F2BA60)
#define CLASS_2_1F76884FC39FD584_METHOD_2_692FCB41B5171216_OFFSET UNITYSDK_OFFSET(0x9F2C830)
#define CLASS_2_1F76884FC39FD584_METHOD_2_6D7CB3E6CB4A7728_OFFSET UNITYSDK_OFFSET(0x9F2AEF0)
#define CLASS_2_1F76884FC39FD584_METHOD_2_75EDAAEDACAEE9F5_OFFSET UNITYSDK_OFFSET(0x9F2C8B0)
#define CLASS_2_1F76884FC39FD584_METHOD_2_7EA5E93E35934248_OFFSET UNITYSDK_OFFSET(0x9F2B9B0)
#define CLASS_2_1F76884FC39FD584_METHOD_2_8464FCBFECF2323C_OFFSET UNITYSDK_OFFSET(0x9F2C430)
#define CLASS_2_1F76884FC39FD584_METHOD_2_8B37ED8B29786899_OFFSET UNITYSDK_OFFSET(0x9F2CBF0)
#define CLASS_2_1F76884FC39FD584_METHOD_2_A684DC678693C934_OFFSET UNITYSDK_OFFSET(0x9F2C230)
#define CLASS_2_1F76884FC39FD584_METHOD_2_B3D9FC5190CEC4F3_OFFSET UNITYSDK_OFFSET(0x9F2C9F0)
#define CLASS_2_1F76884FC39FD584_METHOD_2_CB9DF47FBABA4DCF_OFFSET UNITYSDK_OFFSET(0x9F2C080)
#define CLASS_2_1F76884FC39FD584_METHOD_2_D4D71CF9F746431E_OFFSET UNITYSDK_OFFSET(0x9F2CA10)
#define CLASS_2_1F76884FC39FD584_METHOD_2_D7F2934C8C0ED49F_OFFSET UNITYSDK_OFFSET(0x9F2C2B0)
#define CLASS_2_1F76884FC39FD584_METHOD_2_D916B8ED2A37E279_OFFSET UNITYSDK_OFFSET(0x9F2C930)
#define CLASS_2_1F76884FC39FD584_METHOD_2_E0F949756A10D991_OFFSET UNITYSDK_OFFSET(0x9F2B910)
#define CLASS_2_1F76884FC39FD584_METHOD_2_EBE4F81C9B7E5B93_OFFSET UNITYSDK_OFFSET(0x9F2C720)
#define CLASS_2_1F76884FC39FD584_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x9F2BFB0)
#define CLASS_2_1F76884FC39FD584_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x9F2CB80)
#define CLASS_2_1F76884FC39FD584_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x9F2C060)
#define CLASS_2_1F76884FC39FD584_METHOD_2_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0x9F2BE40)
#define CLASS_2_1F76884FC39FD584_PLAYCLICKSOUND_OFFSET UNITYSDK_OFFSET(0x9F2B070)
#define CLASS_2_1F76884FC39FD584_REGISTERCLICK_OFFSET UNITYSDK_OFFSET(0x9F2B3B0)
#define CLASS_2_1F76884FC39FD584_SAFESETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x9F2B280)
#define CLASS_2_1F76884FC39FD584_SELECTTAB_OFFSET UNITYSDK_OFFSET(0x9F2B0E0)
#define CLASS_2_1F76884FC39FD584_SETTABCOUNT_OFFSET UNITYSDK_OFFSET(0x9F2B310)
#define CLASS_2_1F76884FC39FD584_SETTABLOCK_OFFSET UNITYSDK_OFFSET(0x9F2B1F0)
#define CLASS_2_1F76884FC39FD584_SETTABNAME_OFFSET UNITYSDK_OFFSET(0x9F2B160)
#define CLASS_2_1F76884FC39FD584_SETTABNOTIFICATIONNODEBYMETHOD_OFFSET UNITYSDK_OFFSET(0x9F2B500)
#define CLASS_2_1F76884FC39FD584__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F2B800)
#define CLASS_2_1F76884FC39FD584__CTOR_OFFSET UNITYSDK_OFFSET(0x9F2B7F0)

inline static constexpr unsigned int Class_2_1F76884FC39FD584_TypeDefinitionIndex = 42288;

class Class_2_1F76884FC39FD584 : public ::Class_1_A01CE0B13E11F09E
{
public:
	static ::Foundation::ObjectPool_1<::Class_2_1F76884FC39FD584*>** StaticGet_Field_2_0()
	{
		return (::Foundation::ObjectPool_1<::Class_2_1F76884FC39FD584*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1F76884FC39FD584_TypeDefinitionIndex)->GetStaticField(0x43450);
	}
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584__CCTOR_OFFSET))();
	}

	::System::Int32 get_CurSelectKey()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_GET_CURSELECTKEY_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* get_OrderedKeys()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_GET_ORDEREDKEYS_OFFSET))(this);
	}

	::System::Int32 get_TabButtonCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_GET_TABBUTTONCOUNT_OFFSET))(this);
	}

	::System::Void Method_2_6D7CB3E6CB4A7728(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_6D7CB3E6CB4A7728_OFFSET))(this, a1, a2);
	}

	::System::Void PlayClickSound()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_PLAYCLICKSOUND_OFFSET))(this);
	}

	::System::Void SelectTab(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_SELECTTAB_OFFSET))(this, a1);
	}

	::System::Void SetTabName(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_SETTABNAME_OFFSET))(this, a1, a2);
	}

	::System::Void SetTabLock(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_SETTABLOCK_OFFSET))(this, a1, a2);
	}

	::System::Void SafeSetInteractable(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_SAFESETINTERACTABLE_OFFSET))(this, a1, a2);
	}

	::System::Void SetTabCount(::System::Int32 a1, ::System::Boolean a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_SETTABCOUNT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void RegisterClick(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_REGISTERCLICK_OFFSET))(this, a1);
	}

	::System::Void BindNotificationNode(::System::Int32 a1, ::Class_1_5A585DEB704A07E2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_5A585DEB704A07E2*))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_BINDNOTIFICATIONNODE_OFFSET))(this, a1, a2);
	}

	::System::Void SetTabNotificationNodeByMethod(::System::Func_2<::System::Int32, ::Class_1_5A585DEB704A07E2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::Class_1_5A585DEB704A07E2*>*))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_SETTABNOTIFICATIONNODEBYMETHOD_OFFSET))(this, a1);
	}

	::System::Void Method_2_14014646206E49EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_14014646206E49EF_OFFSET))(this);
	}

	::System::Void Method_2_E0F949756A10D991(::System::Int32 a1, ::UnityEngine::UI::Extension::UITabButton* a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::UITabButton*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_E0F949756A10D991_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7EA5E93E35934248(::System::Int32 a1, ::UnityEngine::UI::Extension::UITabButton* a2, ::System::Action_1<::System::Int32>* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::UITabButton*, ::System::Action_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_7EA5E93E35934248_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_66C85B3A070A8363(::System::Int32 a1, ::UnityEngine::UI::Extension::UITabButton* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::UITabButton*))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_66C85B3A070A8363_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_60AB29E4EE562DBB(::System::Func_2<::System::Int32, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_60AB29E4EE562DBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_1266A942BF66AA3D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_1266A942BF66AA3D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_0E9B12A021FE434E(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_0E9B12A021FE434E_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_2_CB9DF47FBABA4DCF(::Class_2_777A5D016ADC7368* a1, ::UnityEngine::UI::Extension::UITabButtonGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::UnityEngine::UI::Extension::UITabButtonGroup*))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_CB9DF47FBABA4DCF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0F9D9B60BD2DCB59(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_0F9D9B60BD2DCB59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A684DC678693C934(::System::Func_2<::System::Int32, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_A684DC678693C934_OFFSET))(this, a1);
	}

	::Il2CppArray<::UnityEngine::UI::Extension::UITabButton*>* Method_2_D7F2934C8C0ED49F()
	{
		return ((::Il2CppArray<::UnityEngine::UI::Extension::UITabButton*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_D7F2934C8C0ED49F_OFFSET))(this);
	}

	static ::Class_2_1F76884FC39FD584* Method_2_1A7A6329D9446CE2()
	{
		return ((::Class_2_1F76884FC39FD584*(*)())((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_1A7A6329D9446CE2_OFFSET))();
	}

	::System::Void Method_2_03BE4DF8DCCB5848(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_03BE4DF8DCCB5848_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8464FCBFECF2323C(::System::Func_2<::System::Int32, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_8464FCBFECF2323C_OFFSET))(this, a1);
	}

	static ::Class_2_1F76884FC39FD584* Method_2_EBE4F81C9B7E5B93(::Class_2_777A5D016ADC7368* a1, ::UnityEngine::UI::Extension::UITabButtonGroup* a2)
	{
		return ((::Class_2_1F76884FC39FD584*(*)(::Class_2_777A5D016ADC7368*, ::UnityEngine::UI::Extension::UITabButtonGroup*))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_EBE4F81C9B7E5B93_OFFSET))(a1, a2);
	}

	::System::Void Method_2_692FCB41B5171216(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_692FCB41B5171216_OFFSET))(this, a1);
	}

	::System::Void Method_2_75EDAAEDACAEE9F5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_75EDAAEDACAEE9F5_OFFSET))(this, a1);
	}

	::System::Void Method_2_D916B8ED2A37E279(::System::Func_2<::System::Int32, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_D916B8ED2A37E279_OFFSET))(this, a1);
	}

	::UnityEngine::UI::Extension::UITabButton* Method_2_B3D9FC5190CEC4F3(::System::Int32 a1)
	{
		return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_B3D9FC5190CEC4F3_OFFSET))(this, a1);
	}

	::System::Void Method_2_D4D71CF9F746431E(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_D4D71CF9F746431E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_18B39419CD3E2352(::System::Int32 a1, ::Share::ENotificationBadgeType a2, ::NodeGraph::VariantUnion a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_18B39419CD3E2352_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_2_8B37ED8B29786899(::System::Int32 a1, ::UnityEngine::UI::Extension::UITabButton* a2, ::UnityEngine::Events::UnityAction* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::UITabButton*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_1F76884FC39FD584_METHOD_2_8B37ED8B29786899_OFFSET))(this, a1, a2, a3);
	}
};
