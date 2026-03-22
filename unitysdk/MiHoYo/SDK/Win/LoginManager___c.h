#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AF23D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF2410)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__ONLOGOUT_B__26_0_OFFSET UNITYSDK_OFFSET(0x17AF2420)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYAPPLE_B__81_0_OFFSET UNITYSDK_OFFSET(0x17AF30D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYAUTHTICKET_B__77_2_OFFSET UNITYSDK_OFFSET(0x17AF2D20)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYFACEBOOK_B__79_0_OFFSET UNITYSDK_OFFSET(0x17AF2E30)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYGOOGLE_B__82_0_OFFSET UNITYSDK_OFFSET(0x17AF3220)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYTWITTER_B__80_0_OFFSET UNITYSDK_OFFSET(0x17AF2F80)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTWEBVIEWRENDERMETHODABTESTCONFIG_B__96_0_OFFSET UNITYSDK_OFFSET(0x17AF3370)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLISTVIEW_B__66_3_OFFSET UNITYSDK_OFFSET(0x17AF29E0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLISTVIEW_B__66_4_OFFSET UNITYSDK_OFFSET(0x17AF2B80)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINPLUGINUI_B__60_4_OFFSET UNITYSDK_OFFSET(0x17AF26E0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINPLUGINUI_B__60_5_OFFSET UNITYSDK_OFFSET(0x17AF2760)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_11_OFFSET UNITYSDK_OFFSET(0x17AF27E0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_12_OFFSET UNITYSDK_OFFSET(0x17AF2860)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_16_OFFSET UNITYSDK_OFFSET(0x17AF28E0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_17_OFFSET UNITYSDK_OFFSET(0x17AF2960)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEPLUGINUI_B__32_4_OFFSET UNITYSDK_OFFSET(0x17AF24E0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEPLUGINUI_B__32_5_OFFSET UNITYSDK_OFFSET(0x17AF2560)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEVIEW_B__33_3_OFFSET UNITYSDK_OFFSET(0x17AF25E0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEVIEW_B__33_4_OFFSET UNITYSDK_OFFSET(0x17AF2660)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c_TypeDefinitionIndex = 19064;

	class LoginManager___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__80_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9B50);
		}
		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__32_5()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9B58);
		}
		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__60_5()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9B60);
		}
		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__32_4()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9B68);
		}
		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__60_4()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9B70);
		}
		static ::System::Action** StaticGet___9__82_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9B78);
		}
		static ::System::Action_1<::MiHoYo::SDK::AccountModel*>** StaticGet___9__66_4()
		{
			return (::System::Action_1<::MiHoYo::SDK::AccountModel*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9B80);
		}
		static ::System::Action** StaticGet___9__62_16()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9B88);
		}
		static ::System::Action_1<::MiHoYo::SDK::AccountModel*>** StaticGet___9__66_3()
		{
			return (::System::Action_1<::MiHoYo::SDK::AccountModel*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9B90);
		}
		static ::System::Action** StaticGet___9__77_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9B98);
		}
		static ::System::Action** StaticGet___9__79_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9BA0);
		}
		static ::System::Action** StaticGet___9__81_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9BA8);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__96_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9BB0);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__26_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9BB8);
		}
		static ::MiHoYo::SDK::Win::LoginManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::LoginManager___c**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9BC0);
		}
		static ::System::Action** StaticGet___9__62_12()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9BC8);
		}
		static ::System::Action** StaticGet___9__33_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9BD0);
		}
		static ::System::Action** StaticGet___9__33_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9BD8);
		}
		static ::System::Action** StaticGet___9__62_17()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9BE0);
		}
		static ::System::Action** StaticGet___9__62_11()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x9BE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnLogout_b__26_0(::MiHoYo::SDK::NetworkResponseModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__ONLOGOUT_B__26_0_OFFSET))(this, model);
		}

		::System::Void _ShowPhoneMessagePluginUI_b__32_4(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEPLUGINUI_B__32_4_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowPhoneMessagePluginUI_b__32_5(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEPLUGINUI_B__32_5_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowPhoneMessageView_b__33_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEVIEW_B__33_3_OFFSET))(this);
		}

		::System::Void _ShowPhoneMessageView_b__33_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWPHONEMESSAGEVIEW_B__33_4_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginPluginUI_b__60_4(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINPLUGINUI_B__60_4_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__60_5(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINPLUGINUI_B__60_5_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginView_b__62_11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_11_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_12_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_16()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_16_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginView_b__62_17()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLOGINVIEW_B__62_17_OFFSET))(this);
		}

		::System::Void _ShowAccountListView_b__66_3(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLISTVIEW_B__66_3_OFFSET))(this, account);
		}

		::System::Void _ShowAccountListView_b__66_4(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__SHOWACCOUNTLISTVIEW_B__66_4_OFFSET))(this, account);
		}

		::System::Void _RequestLoginByAuthTicket_b__77_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYAUTHTICKET_B__77_2_OFFSET))(this);
		}

		::System::Void _RequestLoginByFacebook_b__79_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYFACEBOOK_B__79_0_OFFSET))(this);
		}

		::System::Void _RequestLoginByTwitter_b__80_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYTWITTER_B__80_0_OFFSET))(this);
		}

		::System::Void _RequestLoginByApple_b__81_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYAPPLE_B__81_0_OFFSET))(this);
		}

		::System::Void _RequestLoginByGoogle_b__82_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTLOGINBYGOOGLE_B__82_0_OFFSET))(this);
		}

		::System::Void _RequestWebViewRenderMethodAbTestConfig_b__96_0(::MiHoYo::SDK::NetworkResponseModel* responseModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__REQUESTWEBVIEWRENDERMETHODABTESTCONFIG_B__96_0_OFFSET))(this, responseModel);
		}
	};
}
