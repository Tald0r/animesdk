#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BubbleProgressColorType.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BubbleProgressColor;
namespace Foundation { class Assets_ConfigHashSetTrim; }
namespace Foundation { class ConfigDiffPatcher; }
namespace MoleMole { class AreaPositionConfig; }
namespace MoleMole { class ConfigDownloader; }
namespace MoleMole { class ConfigGeneralIconBadgeColor; }
namespace MoleMole { class DepositoryPageTabConfigs; }
namespace MoleMole { class ItemIconTweenConfig; }
namespace MoleMole { class NewConfigUICommon; }
namespace MoleMole { class UITokenShowConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_8E08E6DFEA57683D_METHOD_1_035005CBB7B71E6B_OFFSET UNITYSDK_OFFSET(0x181F91B0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_0986E23AB72F8F9A_OFFSET UNITYSDK_OFFSET(0x181F8320)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_1_OFFSET UNITYSDK_OFFSET(0x181F7540)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_2_OFFSET UNITYSDK_OFFSET(0x181F7AB0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_3_OFFSET UNITYSDK_OFFSET(0x181F8A20)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_4_OFFSET UNITYSDK_OFFSET(0x181F90B0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_5_OFFSET UNITYSDK_OFFSET(0x181FA990)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0x181F72D0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_16902B5C4E0DC2E7_OFFSET UNITYSDK_OFFSET(0x181FAA90)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_18ED4DEFF7DD3099_OFFSET UNITYSDK_OFFSET(0x181FB510)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_1B9552277EFEAEB2_OFFSET UNITYSDK_OFFSET(0x181FAD30)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_1FB95FD1B68BBB72_OFFSET UNITYSDK_OFFSET(0x181FB890)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_2B6D372F6404FBE6_1_OFFSET UNITYSDK_OFFSET(0x181FB2A0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_2B6D372F6404FBE6_OFFSET UNITYSDK_OFFSET(0x181F8600)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_5589BB938B28F119_OFFSET UNITYSDK_OFFSET(0x181F8CD0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_1_OFFSET UNITYSDK_OFFSET(0x181F8870)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_2_OFFSET UNITYSDK_OFFSET(0x181F8B20)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_3_OFFSET UNITYSDK_OFFSET(0x181FA310)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_4_OFFSET UNITYSDK_OFFSET(0x181FAEC0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_5_OFFSET UNITYSDK_OFFSET(0x181FB9A0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_OFFSET UNITYSDK_OFFSET(0x181F7120)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_1_OFFSET UNITYSDK_OFFSET(0x181F7BB0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_2_OFFSET UNITYSDK_OFFSET(0x181F8050)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_3_OFFSET UNITYSDK_OFFSET(0x181F99B0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_4_OFFSET UNITYSDK_OFFSET(0x181FA4C0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_5_OFFSET UNITYSDK_OFFSET(0x181FA7F0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_6_OFFSET UNITYSDK_OFFSET(0x181FB100)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_7_OFFSET UNITYSDK_OFFSET(0x181FB660)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_OFFSET UNITYSDK_OFFSET(0x181F7910)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_6C37C5F2E49DA103_OFFSET UNITYSDK_OFFSET(0x181FB800)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_7CEF84E614E3F677_OFFSET UNITYSDK_OFFSET(0x181FC100)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_8624E3F8134E19EE_OFFSET UNITYSDK_OFFSET(0x181FC290)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_8A459814DFB695B3_OFFSET UNITYSDK_OFFSET(0x181FBB50)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_9332559544844A9F_OFFSET UNITYSDK_OFFSET(0x181FBDB0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_96B095F37F66B007_1_OFFSET UNITYSDK_OFFSET(0x181F98B0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_96B095F37F66B007_OFFSET UNITYSDK_OFFSET(0x181F7020)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_9785DA309D2B11C9_OFFSET UNITYSDK_OFFSET(0x181F9CE0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_98DB598AB85A5229_OFFSET UNITYSDK_OFFSET(0x181F94A0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_A1B9B772EA39D631_OFFSET UNITYSDK_OFFSET(0x181FBE50)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_B483E17A0B95AB4B_1_OFFSET UNITYSDK_OFFSET(0x181F9740)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_B483E17A0B95AB4B_OFFSET UNITYSDK_OFFSET(0x181F73D0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_B8A9B972F70896AE_OFFSET UNITYSDK_OFFSET(0x181F7D50)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_B91FCC4BC2E86CAC_OFFSET UNITYSDK_OFFSET(0x181FBF90)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_C5AEF4E3AFBA11F2_OFFSET UNITYSDK_OFFSET(0x181F6A80)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_D31DD8113D6D84FF_OFFSET UNITYSDK_OFFSET(0x181F7640)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_D9913464A417F4FB_OFFSET UNITYSDK_OFFSET(0x181FA660)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_DB62A75C0DF799DD_OFFSET UNITYSDK_OFFSET(0x181F9E70)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_DC693B015DD492EA_OFFSET UNITYSDK_OFFSET(0x181FC540)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_DD2BBA5CD7CDBBD9_1_OFFSET UNITYSDK_OFFSET(0x181F77D0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_DD2BBA5CD7CDBBD9_2_OFFSET UNITYSDK_OFFSET(0x181F8F70)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_DD2BBA5CD7CDBBD9_OFFSET UNITYSDK_OFFSET(0x181F6940)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_DD7D2E16005B2D6E_OFFSET UNITYSDK_OFFSET(0x181F9BB0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_EDF3C50AA1BB2B39_OFFSET UNITYSDK_OFFSET(0x181F84C0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_F7175B61F9411E65_1_OFFSET UNITYSDK_OFFSET(0x181F6D60)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_F7175B61F9411E65_OFFSET UNITYSDK_OFFSET(0x181F6680)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_F7F6D7E340A947F5_OFFSET UNITYSDK_OFFSET(0x181F81F0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x181FB070)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x181F9B50)

inline static constexpr unsigned int Class_1_8E08E6DFEA57683D_TypeDefinitionIndex = 66319;

class Class_1_8E08E6DFEA57683D : public ::System::Object
{
public:
	static ::MoleMole::NewConfigUICommon** StaticGet_Field_1_0()
	{
		return (::MoleMole::NewConfigUICommon**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E08E6DFEA57683D_TypeDefinitionIndex)->GetStaticField(0x40BE0);
	}

	static ::System::Single Method_1_F7175B61F9411E65(::MoleMole::Config::SpecialDamageTextType a1)
	{
		return ((::System::Single(*)(::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_F7175B61F9411E65_OFFSET))(a1);
	}

	static ::System::String* Method_1_DD2BBA5CD7CDBBD9(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_DD2BBA5CD7CDBBD9_OFFSET))(a1);
	}

	static ::UnityEngine::Color Method_1_C5AEF4E3AFBA11F2(::System::String* a1)
	{
		return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_C5AEF4E3AFBA11F2_OFFSET))(a1);
	}

	static ::System::Single Method_1_F7175B61F9411E65_1(::MoleMole::Config::SpecialDamageTextType a1)
	{
		return ((::System::Single(*)(::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_F7175B61F9411E65_1_OFFSET))(a1);
	}

	static ::UnityEngine::AnimationCurve* Method_1_96B095F37F66B007()
	{
		return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_96B095F37F66B007_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_59DB2F770DA8A56A()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_OFFSET))();
	}

	static ::System::Single Method_1_124E7DAB85EAFECD()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_B483E17A0B95AB4B(::System::Int32 a1)
	{
		return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_B483E17A0B95AB4B_OFFSET))(a1);
	}

	static ::System::Single Method_1_124E7DAB85EAFECD_1()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_1_OFFSET))();
	}

	static ::Foundation::ConfigDiffPatcher* Method_1_D31DD8113D6D84FF()
	{
		return ((::Foundation::ConfigDiffPatcher*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_D31DD8113D6D84FF_OFFSET))();
	}

	static ::System::String* Method_1_DD2BBA5CD7CDBBD9_1(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_DD2BBA5CD7CDBBD9_1_OFFSET))(a1);
	}

	static ::System::Single Method_1_6B5EA38BAE5646C2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_OFFSET))();
	}

	static ::System::Single Method_1_124E7DAB85EAFECD_2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_2_OFFSET))();
	}

	static ::System::Single Method_1_6B5EA38BAE5646C2_1()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_1_OFFSET))();
	}

	static ::System::String* Method_1_B8A9B972F70896AE(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_B8A9B972F70896AE_OFFSET))(a1);
	}

	static ::System::Single Method_1_6B5EA38BAE5646C2_2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_2_OFFSET))();
	}

	static ::System::Single Method_1_F7F6D7E340A947F5()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_F7F6D7E340A947F5_OFFSET))();
	}

	static ::System::String* Method_1_0986E23AB72F8F9A()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_0986E23AB72F8F9A_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>* Method_1_EDF3C50AA1BB2B39(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_EDF3C50AA1BB2B39_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_2B6D372F6404FBE6(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_2B6D372F6404FBE6_OFFSET))(a1);
	}

	static ::UnityEngine::Color Method_1_59DB2F770DA8A56A_1()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_1_OFFSET))();
	}

	static ::System::Single Method_1_124E7DAB85EAFECD_3()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_3_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_59DB2F770DA8A56A_2()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_2_OFFSET))();
	}

	static ::MoleMole::AreaPositionConfig* Method_1_5589BB938B28F119(::System::Int32 a1)
	{
		return ((::MoleMole::AreaPositionConfig*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_5589BB938B28F119_OFFSET))(a1);
	}

	static ::System::String* Method_1_DD2BBA5CD7CDBBD9_2(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_DD2BBA5CD7CDBBD9_2_OFFSET))(a1);
	}

	static ::System::Single Method_1_124E7DAB85EAFECD_4()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_4_OFFSET))();
	}

	static ::System::Void Method_1_035005CBB7B71E6B(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_035005CBB7B71E6B_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Color Method_1_98DB598AB85A5229(::Share::EHollowQuestType a1)
	{
		return ((::UnityEngine::Color(*)(::Share::EHollowQuestType))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_98DB598AB85A5229_OFFSET))(a1);
	}

	static ::UnityEngine::Color Method_1_B483E17A0B95AB4B_1(::System::Int32 a1)
	{
		return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_B483E17A0B95AB4B_1_OFFSET))(a1);
	}

	static ::UnityEngine::AnimationCurve* Method_1_96B095F37F66B007_1()
	{
		return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_96B095F37F66B007_1_OFFSET))();
	}

	static ::System::Single Method_1_6B5EA38BAE5646C2_3()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_3_OFFSET))();
	}

	static ::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_FB4BE762B6186C23_OFFSET))();
	}

	static ::MoleMole::ConfigGeneralIconBadgeColor* Method_1_DD7D2E16005B2D6E(::System::Int32 a1)
	{
		return ((::MoleMole::ConfigGeneralIconBadgeColor*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_DD7D2E16005B2D6E_OFFSET))(a1);
	}

	static ::MoleMole::ConfigDownloader* Method_1_9785DA309D2B11C9()
	{
		return ((::MoleMole::ConfigDownloader*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_9785DA309D2B11C9_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_DB62A75C0DF799DD(::System::String* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Color(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_DB62A75C0DF799DD_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Color Method_1_59DB2F770DA8A56A_3()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_3_OFFSET))();
	}

	static ::System::Single Method_1_6B5EA38BAE5646C2_4()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_4_OFFSET))();
	}

	static ::MoleMole::DepositoryPageTabConfigs* Method_1_D9913464A417F4FB()
	{
		return ((::MoleMole::DepositoryPageTabConfigs*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_D9913464A417F4FB_OFFSET))();
	}

	static ::System::Single Method_1_6B5EA38BAE5646C2_5()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_5_OFFSET))();
	}

	static ::System::Single Method_1_124E7DAB85EAFECD_5()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_5_OFFSET))();
	}

	static ::System::Boolean Method_1_16902B5C4E0DC2E7(::Foundation::AssetPath a1, ::Foundation::AssetPath& a2)
	{
		return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_16902B5C4E0DC2E7_OFFSET))(a1, a2);
	}

	static ::Foundation::Assets_ConfigHashSetTrim* Method_1_1B9552277EFEAEB2()
	{
		return ((::Foundation::Assets_ConfigHashSetTrim*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_1B9552277EFEAEB2_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_59DB2F770DA8A56A_4()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_4_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Single Method_1_6B5EA38BAE5646C2_6()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_6_OFFSET))();
	}

	static ::System::Int32 Method_1_2B6D372F6404FBE6_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_2B6D372F6404FBE6_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_18ED4DEFF7DD3099(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_18ED4DEFF7DD3099_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_6B5EA38BAE5646C2_7()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_7_OFFSET))();
	}

	static ::MoleMole::NewConfigUICommon* Method_1_6C37C5F2E49DA103()
	{
		return ((::MoleMole::NewConfigUICommon*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_6C37C5F2E49DA103_OFFSET))();
	}

	static ::System::Void Method_1_1FB95FD1B68BBB72(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_1FB95FD1B68BBB72_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Color Method_1_59DB2F770DA8A56A_5()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_5_OFFSET))();
	}

	static ::System::Void Method_1_8A459814DFB695B3(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_8A459814DFB695B3_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_9332559544844A9F(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_9332559544844A9F_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_A1B9B772EA39D631(::System::String* a1)
	{
		return ((::UnityEngine::Vector2(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_A1B9B772EA39D631_OFFSET))(a1);
	}

	static ::UnityEngine::Color Method_1_B91FCC4BC2E86CAC(::System::String* a1)
	{
		return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_B91FCC4BC2E86CAC_OFFSET))(a1);
	}

	static ::MoleMole::ItemIconTweenConfig* Method_1_7CEF84E614E3F677()
	{
		return ((::MoleMole::ItemIconTweenConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_7CEF84E614E3F677_OFFSET))();
	}

	static ::BubbleProgressColor* Method_1_8624E3F8134E19EE(::BubbleProgressColorType a1)
	{
		return ((::BubbleProgressColor*(*)(::BubbleProgressColorType))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_8624E3F8134E19EE_OFFSET))(a1);
	}

	static ::UnityEngine::Color Method_1_DC693B015DD492EA(::System::Int32 a1)
	{
		return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_DC693B015DD492EA_OFFSET))(a1);
	}
};
