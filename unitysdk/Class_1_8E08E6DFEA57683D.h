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

#define CLASS_1_8E08E6DFEA57683D_METHOD_1_035005CBB7B71E6B_OFFSET UNITYSDK_OFFSET(0x6872F80)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_0986E23AB72F8F9A_OFFSET UNITYSDK_OFFSET(0x6873520)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_1_OFFSET UNITYSDK_OFFSET(0x6873C00)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_2_OFFSET UNITYSDK_OFFSET(0x6874920)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_3_OFFSET UNITYSDK_OFFSET(0x6875050)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_4_OFFSET UNITYSDK_OFFSET(0x68757E0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_5_OFFSET UNITYSDK_OFFSET(0x68777D0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0x68720A0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_16902B5C4E0DC2E7_OFFSET UNITYSDK_OFFSET(0x6874040)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_18ED4DEFF7DD3099_OFFSET UNITYSDK_OFFSET(0x6874620)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_1B9552277EFEAEB2_OFFSET UNITYSDK_OFFSET(0x6874490)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_1FB95FD1B68BBB72_OFFSET UNITYSDK_OFFSET(0x6875A70)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_2B6D372F6404FBE6_1_OFFSET UNITYSDK_OFFSET(0x68764A0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_2B6D372F6404FBE6_OFFSET UNITYSDK_OFFSET(0x6873990)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_5589BB938B28F119_OFFSET UNITYSDK_OFFSET(0x6875B80)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_1_OFFSET UNITYSDK_OFFSET(0x6871EF0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_2_OFFSET UNITYSDK_OFFSET(0x6872A30)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_3_OFFSET UNITYSDK_OFFSET(0x68742E0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_4_OFFSET UNITYSDK_OFFSET(0x6874770)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_5_OFFSET UNITYSDK_OFFSET(0x6876BB0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_OFFSET UNITYSDK_OFFSET(0x6871D40)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_1_OFFSET UNITYSDK_OFFSET(0x68736C0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_2_OFFSET UNITYSDK_OFFSET(0x6873D00)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_3_OFFSET UNITYSDK_OFFSET(0x6873EA0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_4_OFFSET UNITYSDK_OFFSET(0x6875150)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_5_OFFSET UNITYSDK_OFFSET(0x68752F0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_6_OFFSET UNITYSDK_OFFSET(0x6875F60)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_7_OFFSET UNITYSDK_OFFSET(0x68768A0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_OFFSET UNITYSDK_OFFSET(0x68721A0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_6C37C5F2E49DA103_OFFSET UNITYSDK_OFFSET(0x683F080)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_7CEF84E614E3F677_OFFSET UNITYSDK_OFFSET(0x68758E0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_8624E3F8134E19EE_OFFSET UNITYSDK_OFFSET(0x6873270)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_8A459814DFB695B3_OFFSET UNITYSDK_OFFSET(0x6874DF0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_9332559544844A9F_OFFSET UNITYSDK_OFFSET(0x6876400)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_96B095F37F66B007_1_OFFSET UNITYSDK_OFFSET(0x6872E80)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_96B095F37F66B007_OFFSET UNITYSDK_OFFSET(0x6872BE0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_9785DA309D2B11C9_OFFSET UNITYSDK_OFFSET(0x6872340)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_98DB598AB85A5229_OFFSET UNITYSDK_OFFSET(0x6874B50)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_A1B9B772EA39D631_OFFSET UNITYSDK_OFFSET(0x6877390)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_B483E17A0B95AB4B_1_OFFSET UNITYSDK_OFFSET(0x6877660)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_B483E17A0B95AB4B_OFFSET UNITYSDK_OFFSET(0x6871BD0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_B8A9B972F70896AE_OFFSET UNITYSDK_OFFSET(0x6876100)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_B91FCC4BC2E86CAC_OFFSET UNITYSDK_OFFSET(0x6876A40)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_C5AEF4E3AFBA11F2_OFFSET UNITYSDK_OFFSET(0x68724D0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_D31DD8113D6D84FF_OFFSET UNITYSDK_OFFSET(0x6876710)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_D9913464A417F4FB_OFFSET UNITYSDK_OFFSET(0x68774D0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_DB62A75C0DF799DD_OFFSET UNITYSDK_OFFSET(0x6871730)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_DC693B015DD492EA_OFFSET UNITYSDK_OFFSET(0x6876D60)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_DD2BBA5CD7CDBBD9_1_OFFSET UNITYSDK_OFFSET(0x6872CE0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_DD2BBA5CD7CDBBD9_2_OFFSET UNITYSDK_OFFSET(0x6875E20)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_DD2BBA5CD7CDBBD9_OFFSET UNITYSDK_OFFSET(0x68728F0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_DD7D2E16005B2D6E_OFFSET UNITYSDK_OFFSET(0x6873860)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_EDF3C50AA1BB2B39_OFFSET UNITYSDK_OFFSET(0x68727B0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_F7175B61F9411E65_1_OFFSET UNITYSDK_OFFSET(0x68770D0)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_F7175B61F9411E65_OFFSET UNITYSDK_OFFSET(0x6875520)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_F7F6D7E340A947F5_OFFSET UNITYSDK_OFFSET(0x6874A20)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x6875490)
#define CLASS_1_8E08E6DFEA57683D_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x6872E20)

inline static constexpr unsigned int Class_1_8E08E6DFEA57683D_TypeDefinitionIndex = 78736;

class Class_1_8E08E6DFEA57683D : public ::System::Object
{
public:
	static ::MoleMole::NewConfigUICommon** StaticGet_Field_1_0()
	{
		return (::MoleMole::NewConfigUICommon**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E08E6DFEA57683D_TypeDefinitionIndex)->GetStaticField(0x36DF0);
	}

	static ::UnityEngine::Color Method_1_DB62A75C0DF799DD(::System::String* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Color(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_DB62A75C0DF799DD_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Color Method_1_B483E17A0B95AB4B(::System::Int32 a1)
	{
		return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_B483E17A0B95AB4B_OFFSET))(a1);
	}

	static ::UnityEngine::Color Method_1_59DB2F770DA8A56A()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_59DB2F770DA8A56A_1()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_1_OFFSET))();
	}

	static ::System::Single Method_1_124E7DAB85EAFECD()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_OFFSET))();
	}

	static ::System::Single Method_1_6B5EA38BAE5646C2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_OFFSET))();
	}

	static ::MoleMole::ConfigDownloader* Method_1_9785DA309D2B11C9()
	{
		return ((::MoleMole::ConfigDownloader*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_9785DA309D2B11C9_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_C5AEF4E3AFBA11F2(::System::String* a1)
	{
		return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_C5AEF4E3AFBA11F2_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>* Method_1_EDF3C50AA1BB2B39(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_EDF3C50AA1BB2B39_OFFSET))(a1);
	}

	static ::System::String* Method_1_DD2BBA5CD7CDBBD9(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_DD2BBA5CD7CDBBD9_OFFSET))(a1);
	}

	static ::UnityEngine::Color Method_1_59DB2F770DA8A56A_2()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_2_OFFSET))();
	}

	static ::UnityEngine::AnimationCurve* Method_1_96B095F37F66B007()
	{
		return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_96B095F37F66B007_OFFSET))();
	}

	static ::System::String* Method_1_DD2BBA5CD7CDBBD9_1(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_DD2BBA5CD7CDBBD9_1_OFFSET))(a1);
	}

	static ::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_FB4BE762B6186C23_OFFSET))();
	}

	static ::UnityEngine::AnimationCurve* Method_1_96B095F37F66B007_1()
	{
		return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_96B095F37F66B007_1_OFFSET))();
	}

	static ::System::Void Method_1_035005CBB7B71E6B(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_035005CBB7B71E6B_OFFSET))(a1, a2);
	}

	static ::BubbleProgressColor* Method_1_8624E3F8134E19EE(::BubbleProgressColorType a1)
	{
		return ((::BubbleProgressColor*(*)(::BubbleProgressColorType))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_8624E3F8134E19EE_OFFSET))(a1);
	}

	static ::System::String* Method_1_0986E23AB72F8F9A()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_0986E23AB72F8F9A_OFFSET))();
	}

	static ::System::Single Method_1_6B5EA38BAE5646C2_1()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_1_OFFSET))();
	}

	static ::MoleMole::ConfigGeneralIconBadgeColor* Method_1_DD7D2E16005B2D6E(::System::Int32 a1)
	{
		return ((::MoleMole::ConfigGeneralIconBadgeColor*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_DD7D2E16005B2D6E_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_2B6D372F6404FBE6(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_2B6D372F6404FBE6_OFFSET))(a1);
	}

	static ::System::Single Method_1_124E7DAB85EAFECD_1()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_1_OFFSET))();
	}

	static ::System::Single Method_1_6B5EA38BAE5646C2_2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_2_OFFSET))();
	}

	static ::System::Single Method_1_6B5EA38BAE5646C2_3()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_3_OFFSET))();
	}

	static ::System::Boolean Method_1_16902B5C4E0DC2E7(::Foundation::AssetPath a1, ::Foundation::AssetPath& a2)
	{
		return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_16902B5C4E0DC2E7_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Color Method_1_59DB2F770DA8A56A_3()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_3_OFFSET))();
	}

	static ::Foundation::Assets_ConfigHashSetTrim* Method_1_1B9552277EFEAEB2()
	{
		return ((::Foundation::Assets_ConfigHashSetTrim*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_1B9552277EFEAEB2_OFFSET))();
	}

	static ::System::String* Method_1_18ED4DEFF7DD3099(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_18ED4DEFF7DD3099_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Color Method_1_59DB2F770DA8A56A_4()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_4_OFFSET))();
	}

	static ::System::Single Method_1_124E7DAB85EAFECD_2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_2_OFFSET))();
	}

	static ::System::Single Method_1_F7F6D7E340A947F5()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_F7F6D7E340A947F5_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_98DB598AB85A5229(::Share::EHollowQuestType a1)
	{
		return ((::UnityEngine::Color(*)(::Share::EHollowQuestType))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_98DB598AB85A5229_OFFSET))(a1);
	}

	static ::System::Void Method_1_8A459814DFB695B3(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_8A459814DFB695B3_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_124E7DAB85EAFECD_3()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_3_OFFSET))();
	}

	static ::System::Single Method_1_6B5EA38BAE5646C2_4()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_4_OFFSET))();
	}

	static ::System::Single Method_1_6B5EA38BAE5646C2_5()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_5_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Single Method_1_F7175B61F9411E65(::MoleMole::Config::SpecialDamageTextType a1)
	{
		return ((::System::Single(*)(::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_F7175B61F9411E65_OFFSET))(a1);
	}

	static ::System::Single Method_1_124E7DAB85EAFECD_4()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_4_OFFSET))();
	}

	static ::MoleMole::ItemIconTweenConfig* Method_1_7CEF84E614E3F677()
	{
		return ((::MoleMole::ItemIconTweenConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_7CEF84E614E3F677_OFFSET))();
	}

	static ::System::Void Method_1_1FB95FD1B68BBB72(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_1FB95FD1B68BBB72_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::AreaPositionConfig* Method_1_5589BB938B28F119(::System::Int32 a1)
	{
		return ((::MoleMole::AreaPositionConfig*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_5589BB938B28F119_OFFSET))(a1);
	}

	static ::System::String* Method_1_DD2BBA5CD7CDBBD9_2(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_DD2BBA5CD7CDBBD9_2_OFFSET))(a1);
	}

	static ::System::Single Method_1_6B5EA38BAE5646C2_6()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_6_OFFSET))();
	}

	static ::System::String* Method_1_B8A9B972F70896AE(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_B8A9B972F70896AE_OFFSET))(a1);
	}

	static ::System::String* Method_1_9332559544844A9F(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_9332559544844A9F_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_2B6D372F6404FBE6_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_2B6D372F6404FBE6_1_OFFSET))(a1);
	}

	static ::Foundation::ConfigDiffPatcher* Method_1_D31DD8113D6D84FF()
	{
		return ((::Foundation::ConfigDiffPatcher*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_D31DD8113D6D84FF_OFFSET))();
	}

	static ::System::Single Method_1_6B5EA38BAE5646C2_7()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_6B5EA38BAE5646C2_7_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_B91FCC4BC2E86CAC(::System::String* a1)
	{
		return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_B91FCC4BC2E86CAC_OFFSET))(a1);
	}

	static ::UnityEngine::Color Method_1_59DB2F770DA8A56A_5()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_59DB2F770DA8A56A_5_OFFSET))();
	}

	static ::MoleMole::NewConfigUICommon* Method_1_6C37C5F2E49DA103()
	{
		return ((::MoleMole::NewConfigUICommon*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_6C37C5F2E49DA103_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_DC693B015DD492EA(::System::Int32 a1)
	{
		return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_DC693B015DD492EA_OFFSET))(a1);
	}

	static ::System::Single Method_1_F7175B61F9411E65_1(::MoleMole::Config::SpecialDamageTextType a1)
	{
		return ((::System::Single(*)(::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_F7175B61F9411E65_1_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_A1B9B772EA39D631(::System::String* a1)
	{
		return ((::UnityEngine::Vector2(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_A1B9B772EA39D631_OFFSET))(a1);
	}

	static ::MoleMole::DepositoryPageTabConfigs* Method_1_D9913464A417F4FB()
	{
		return ((::MoleMole::DepositoryPageTabConfigs*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_D9913464A417F4FB_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_B483E17A0B95AB4B_1(::System::Int32 a1)
	{
		return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_B483E17A0B95AB4B_1_OFFSET))(a1);
	}

	static ::System::Single Method_1_124E7DAB85EAFECD_5()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_METHOD_1_124E7DAB85EAFECD_5_OFFSET))();
	}
};
