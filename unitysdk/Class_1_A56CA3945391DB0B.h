#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A56CA3945391DB0B_Struct_2_25AF7E5CD29C404A_3.h"
#include "unitysdk/Enum_3_6CB69BC1B9D287DA.h"
#include "unitysdk/Enum_3_AF372E25E8B1C1D6.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"
#include "unitysdk/MoleMole/CinemaSinglePushPullParamsStruct.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/Struct_2_5DC1F047D4EA2A30.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_3;
class Class_1_A677A4EF8BA06398;
class Class_2_5F64140FAB2210F3;
class Class_2_699998D4E6F32559;
namespace MoleMole { class ConfigUICinema; }
namespace MoleMole { class UICinemaPlayPageController; }
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }

#define CLASS_1_A56CA3945391DB0B_METHOD_1_014FB4F6CA4115B0_OFFSET UNITYSDK_OFFSET(0x736E870)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_01A472FE96F4E954_OFFSET UNITYSDK_OFFSET(0x736F7C0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_07AAF34CF555A24F_OFFSET UNITYSDK_OFFSET(0x736C5A0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x736EDF0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_0FD2DEE24914FC05_OFFSET UNITYSDK_OFFSET(0x736EE90)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_12B6EDF68F3CDE7A_OFFSET UNITYSDK_OFFSET(0x736D340)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_225531908D91D764_OFFSET UNITYSDK_OFFSET(0x736BE60)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_2CBA6A2346720E85_OFFSET UNITYSDK_OFFSET(0x736FB40)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x736ECF0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x73704C0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x736C770)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_4C5E0877506ADDE5_OFFSET UNITYSDK_OFFSET(0x736D6F0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_57C72D11F44920F7_OFFSET UNITYSDK_OFFSET(0x736C8D0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_5B94350BBAC6A35E_OFFSET UNITYSDK_OFFSET(0x736DB00)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_5EBCF276C230582C_1_OFFSET UNITYSDK_OFFSET(0x736F340)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x736D680)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_67D05FE0CEB34DEB_OFFSET UNITYSDK_OFFSET(0x736FF80)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_6A0B9ADCCEE86531_OFFSET UNITYSDK_OFFSET(0x736D010)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x736DF30)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_745CA43C185AC41A_OFFSET UNITYSDK_OFFSET(0x736CEE0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_78385E9CD11A8E10_OFFSET UNITYSDK_OFFSET(0x736E1D0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x736DDE0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x736D000)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x736D0F0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_9126C9C94FC0FA6A_OFFSET UNITYSDK_OFFSET(0x736BCD0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x736F9E0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0x73703F0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x736C4E0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_9711FBACEDA060A2_OFFSET UNITYSDK_OFFSET(0x736F430)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x736F1C0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x736FAB0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_B49E4F7706129DBE_OFFSET UNITYSDK_OFFSET(0x736BFE0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_BED485AA59C790B8_1_OFFSET UNITYSDK_OFFSET(0x7370210)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_BED485AA59C790B8_OFFSET UNITYSDK_OFFSET(0x736EFE0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_CA21411944361A57_OFFSET UNITYSDK_OFFSET(0x736DDF0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x736E160)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x736C840)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x736DED0)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_D76759BD51B8BED3_OFFSET UNITYSDK_OFFSET(0x736FD60)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_F2A1D3C2AD5054B1_OFFSET UNITYSDK_OFFSET(0x736EC50)
#define CLASS_1_A56CA3945391DB0B_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x736F3B0)
#define CLASS_1_A56CA3945391DB0B__CTOR_OFFSET UNITYSDK_OFFSET(0x736BC10)

inline static constexpr unsigned int Class_1_A56CA3945391DB0B_TypeDefinitionIndex = 61568;

class Class_1_A56CA3945391DB0B : public ::System::Object
{
public:
	::MoleMole::Config::ConfigCameraNoise* Field_1_14; // 0x10
	::System::Action* Field_1_8; // 0x18
	::System::Action_1<::MoleMole::UICameraAtom>* Field_1_17; // 0x20
	::UnityEngine::AnimationCurve* Field_1_2; // 0x28
	::Class_1_47EB23CB5C4B2615_3* Field_1_13; // 0x30
	::MoleMole::UICinemaPlayPageController* Field_1_11; // 0x38
	::Class_2_5F64140FAB2210F3* Field_1_15; // 0x40
	::UnityEngine::AnimationCurve* Field_1_1; // 0x48
	::System::Collections::Generic::List_1<::Class_1_A677A4EF8BA06398*>* Field_1_10; // 0x50
	::System::Action* Field_1_7; // 0x58
	::Class_2_699998D4E6F32559* Field_1_9; // 0x60
	::System::Func_1<::MoleMole::UICameraAtom>* Field_1_16; // 0x68
	::Enum_3_6CB69BC1B9D287DA Field_1_0; // 0x70
	::System::Single Field_1_5; // 0x74
	::System::Single Field_1_3; // 0x78
	::Enum_3_AF372E25E8B1C1D6 Field_1_12; // 0x7C
	::System::Single Field_1_6; // 0x80
	::Class_1_A56CA3945391DB0B_Struct_2_25AF7E5CD29C404A_3 Field_1_18; // 0x84
	::System::Single Field_1_4; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9126C9C94FC0FA6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_9126C9C94FC0FA6A_OFFSET))(this);
	}

	::System::Void Method_1_225531908D91D764(::MoleMole::Config::ConfigHollowCameraShake* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_225531908D91D764_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_07AAF34CF555A24F(::MoleMole::Config::ConfigCameraNoise* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraNoise*, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_07AAF34CF555A24F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_57C72D11F44920F7(::Enum_3_6CB69BC1B9D287DA a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_6CB69BC1B9D287DA, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_57C72D11F44920F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_745CA43C185AC41A(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_745CA43C185AC41A_OFFSET))(this, a1);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_6A0B9ADCCEE86531(::MoleMole::UICinemaPlayPageController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICinemaPlayPageController*))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_6A0B9ADCCEE86531_OFFSET))(this, a1);
	}

	::System::Void Method_1_12B6EDF68F3CDE7A(::MoleMole::ConfigUICinema* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICinema*))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_12B6EDF68F3CDE7A_OFFSET))(this, a1);
	}

	::System::Void Method_1_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Void Method_1_5B94350BBAC6A35E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_5B94350BBAC6A35E_OFFSET))(this, a1);
	}

	::System::Void Method_1_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_832295EC279E5994_1_OFFSET))(this);
	}

	::MoleMole::UICameraAtom Method_1_CA21411944361A57()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_CA21411944361A57_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_78385E9CD11A8E10(::Enum_3_6CB69BC1B9D287DA a1, ::MoleMole::CinemaSinglePushPullParamsStruct a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_6CB69BC1B9D287DA, ::MoleMole::CinemaSinglePushPullParamsStruct))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_78385E9CD11A8E10_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_014FB4F6CA4115B0(::MoleMole::CinemaCameraPosEnum a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_014FB4F6CA4115B0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F2A1D3C2AD5054B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_F2A1D3C2AD5054B1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_47EB23CB5C4B2615_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_47EB23CB5C4B2615_3*))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::MoleMole::UICameraAtom Method_1_0FD2DEE24914FC05()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_0FD2DEE24914FC05_OFFSET))(this);
	}

	::System::Void Method_1_BED485AA59C790B8(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Single>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_BED485AA59C790B8_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Void Method_1_5EBCF276C230582C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_5EBCF276C230582C_1_OFFSET))(this);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::MoleMole::UICameraAtom Method_1_9711FBACEDA060A2()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_9711FBACEDA060A2_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_01A472FE96F4E954(::Struct_2_5DC1F047D4EA2A30 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_5DC1F047D4EA2A30))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_01A472FE96F4E954_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CBA6A2346720E85(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_2CBA6A2346720E85_OFFSET))(this, a1);
	}

	::System::Void Method_1_D76759BD51B8BED3(::MoleMole::UICameraAtom a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_D76759BD51B8BED3_OFFSET))(this, a1);
	}

	::System::Void Method_1_67D05FE0CEB34DEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_67D05FE0CEB34DEB_OFFSET))(this);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_BED485AA59C790B8_1(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Single>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_BED485AA59C790B8_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_9681042564541CD6_2_OFFSET))(this);
	}

	::System::Void Method_1_B49E4F7706129DBE(::Class_2_5F64140FAB2210F3* a1, ::MoleMole::Config::ConfigHollowCameraShake* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5F64140FAB2210F3*, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_B49E4F7706129DBE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Void Method_1_4C5E0877506ADDE5(::Enum_3_6CB69BC1B9D287DA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_6CB69BC1B9D287DA))((::PBYTE)hIl2Cpp + CLASS_1_A56CA3945391DB0B_METHOD_1_4C5E0877506ADDE5_OFFSET))(this, a1);
	}
};
