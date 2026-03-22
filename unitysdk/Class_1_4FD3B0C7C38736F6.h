#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5430DDABF48F9EFB.h"
#include "unitysdk/Enum_3_9F8D47E52A1FBE0C.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/Struct_2_186797E34BDAB9E2.h"
#include "unitysdk/Struct_2_433EAFD16930C7BA.h"
#include "unitysdk/Struct_2_74E7456CEA16AA28.h"
#include "unitysdk/Struct_2_9E75F47F2670B678.h"
#include "unitysdk/Struct_2_A4204C1B14C9FC70.h"
#include "unitysdk/System/Object.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_F3CFF1AFF7EE7DCD;
class Class_3_8F19DA8B255A2CD0;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsComponent; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { template <typename T> class QuickList_1; }
namespace System { class Delegate; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_020ABED03CAA3529_OFFSET UNITYSDK_OFFSET(0x77B20D0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_03BECA41F284B408_OFFSET UNITYSDK_OFFSET(0x77B1ED0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_07A1CFD9A2DAC97F_OFFSET UNITYSDK_OFFSET(0x77B1550)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_07CB65322854512A_1_OFFSET UNITYSDK_OFFSET(0x77B3800)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_07CB65322854512A_OFFSET UNITYSDK_OFFSET(0x77B1A40)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_0889EFD5B1516E28_OFFSET UNITYSDK_OFFSET(0x77B4FD0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_0AC83E6040F3949A_OFFSET UNITYSDK_OFFSET(0x77AE960)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_0C1D4A9C7FAC9FD1_OFFSET UNITYSDK_OFFSET(0x77AEE50)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_13372D0D46A0DFC2_1_OFFSET UNITYSDK_OFFSET(0x77B4D90)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_13372D0D46A0DFC2_OFFSET UNITYSDK_OFFSET(0x77B1C90)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_19E06618C5564B9A_OFFSET UNITYSDK_OFFSET(0x77AE6C0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_1AB396F5D25B6697_OFFSET UNITYSDK_OFFSET(0x77B3E80)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_1C1ABC086DA40C0B_OFFSET UNITYSDK_OFFSET(0x77B0E40)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_1D65DCB5EBAF222B_OFFSET UNITYSDK_OFFSET(0x77AFE80)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_20EA1EB28DFA8677_OFFSET UNITYSDK_OFFSET(0x77B32F0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_2EF397ADE643D730_OFFSET UNITYSDK_OFFSET(0x77B00A0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_36BABEFFF1166F4C_OFFSET UNITYSDK_OFFSET(0x77AF800)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_370E5D42E7C51A6B_OFFSET UNITYSDK_OFFSET(0x77B0A90)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_498D78CB42ABACD1_OFFSET UNITYSDK_OFFSET(0x77AEC80)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_50BD9A8E04B76E0E_OFFSET UNITYSDK_OFFSET(0x77B4960)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_54B9C454AB41352C_OFFSET UNITYSDK_OFFSET(0x77B3D50)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_5BFB594B065344E0_OFFSET UNITYSDK_OFFSET(0x77B3C20)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_6220FF52134FB0A3_OFFSET UNITYSDK_OFFSET(0x77ADE10)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_674C0670CF2AC9E6_OFFSET UNITYSDK_OFFSET(0x77B28B0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_68180F0A91B82372_OFFSET UNITYSDK_OFFSET(0x77B1980)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_6F8C886C25935819_OFFSET UNITYSDK_OFFSET(0x77B3130)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_75B7352D76660734_OFFSET UNITYSDK_OFFSET(0x7771550)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_7E08D95B7FF5A527_OFFSET UNITYSDK_OFFSET(0x77B2FA0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_1_OFFSET UNITYSDK_OFFSET(0x77AFC40)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_2_OFFSET UNITYSDK_OFFSET(0x77B2670)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_3_OFFSET UNITYSDK_OFFSET(0x77B2C80)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_4_OFFSET UNITYSDK_OFFSET(0x77B39E0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_OFFSET UNITYSDK_OFFSET(0x77AE3A0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_827C776591806EC5_1_OFFSET UNITYSDK_OFFSET(0x77B0950)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_827C776591806EC5_2_OFFSET UNITYSDK_OFFSET(0x77B1810)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_827C776591806EC5_3_OFFSET UNITYSDK_OFFSET(0x77B1F90)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_827C776591806EC5_OFFSET UNITYSDK_OFFSET(0x77B0340)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_82DEC43DC60476D4_OFFSET UNITYSDK_OFFSET(0x77AE5E0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_8856EAF4107B25FF_1_OFFSET UNITYSDK_OFFSET(0x77B1360)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_8856EAF4107B25FF_OFFSET UNITYSDK_OFFSET(0x77AE800)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_8A12E364C1F9512D_OFFSET UNITYSDK_OFFSET(0x77B3440)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_8CA19C38C4390015_1_OFFSET UNITYSDK_OFFSET(0x77AF9A0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_8CA19C38C4390015_2_OFFSET UNITYSDK_OFFSET(0x77B2500)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_8CA19C38C4390015_3_OFFSET UNITYSDK_OFFSET(0x77B2E60)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_8CA19C38C4390015_OFFSET UNITYSDK_OFFSET(0x77AEB40)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_956E6AF642FE5DCE_OFFSET UNITYSDK_OFFSET(0x77B3660)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_9E7F1A4AAB0B506A_OFFSET UNITYSDK_OFFSET(0x77AE150)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_9E8571FD458418FE_OFFSET UNITYSDK_OFFSET(0x77AFB10)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_ADB9CAE7731998DE_OFFSET UNITYSDK_OFFSET(0x77B1470)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_AED79AC0293F2CDF_OFFSET UNITYSDK_OFFSET(0x77B13E0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_B3E446386788F7A8_OFFSET UNITYSDK_OFFSET(0x77AEF20)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_C0357636811F207B_OFFSET UNITYSDK_OFFSET(0x77ADC60)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_C04B51087AB34F69_OFFSET UNITYSDK_OFFSET(0x77B2B30)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_C6EDE7C446C8EB9B_OFFSET UNITYSDK_OFFSET(0x77B0730)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_C79DC384F6A62AA7_OFFSET UNITYSDK_OFFSET(0x77AE1C0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_CB2342617EEF34D5_OFFSET UNITYSDK_OFFSET(0x77B04B0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_CF347C8679BFB90C_1_OFFSET UNITYSDK_OFFSET(0x77AF360)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_CF347C8679BFB90C_OFFSET UNITYSDK_OFFSET(0x77B0520)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_D1DDFAE5712F6A68_OFFSET UNITYSDK_OFFSET(0x77AE880)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_D4E92F2DE5F84390_1_OFFSET UNITYSDK_OFFSET(0x77B1180)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_D4E92F2DE5F84390_OFFSET UNITYSDK_OFFSET(0x77AF620)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_D7AE3ADCEC0977AB_OFFSET UNITYSDK_OFFSET(0x77B05A0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_DBEA909AE97806F3_1_OFFSET UNITYSDK_OFFSET(0x77B4AB0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_DBEA909AE97806F3_OFFSET UNITYSDK_OFFSET(0x77B1050)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_E9B6D8E5B61BBD16_1_OFFSET UNITYSDK_OFFSET(0x77B22C0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_E9B6D8E5B61BBD16_OFFSET UNITYSDK_OFFSET(0x77AF3E0)
#define CLASS_1_4FD3B0C7C38736F6_METHOD_1_FB8A0D7682787C48_OFFSET UNITYSDK_OFFSET(0x77B4BE0)

inline static constexpr unsigned int Class_1_4FD3B0C7C38736F6_TypeDefinitionIndex = 79178;

class Class_1_4FD3B0C7C38736F6 : public ::System::Object
{
public:
	static ::System::Void Method_1_C0357636811F207B(::System::Action_1<::Class_1_B7E341C5F1A6F199*>* a1, ::Enum_3_9F8D47E52A1FBE0C a2, ::Struct_2_9E75F47F2670B678 a3)
	{
		return ((::System::Void(*)(::System::Action_1<::Class_1_B7E341C5F1A6F199*>*, ::Enum_3_9F8D47E52A1FBE0C, ::Struct_2_9E75F47F2670B678))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_C0357636811F207B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_6220FF52134FB0A3(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EntityType a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_6220FF52134FB0A3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9E7F1A4AAB0B506A(::MoleMole::Battle::Entity* a1, ::Class_1_B7E341C5F1A6F199* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_9E7F1A4AAB0B506A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7F592F9ED1C9D2B3(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678 a2, ::Struct_2_74E7456CEA16AA28 a3)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678, ::Struct_2_74E7456CEA16AA28))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_82DEC43DC60476D4(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_82DEC43DC60476D4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_8856EAF4107B25FF(::MoleMole::Config::EntityType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_8856EAF4107B25FF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D1DDFAE5712F6A68(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_D1DDFAE5712F6A68_OFFSET))(a1);
	}

	static ::System::Void Method_1_8CA19C38C4390015(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678& a2)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678&))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_8CA19C38C4390015_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_498D78CB42ABACD1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_498D78CB42ABACD1_OFFSET))(a1);
	}

	static ::System::Void Method_1_B3E446386788F7A8(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_B3E446386788F7A8_OFFSET))(a1);
	}

	static ::System::Void Method_1_E9B6D8E5B61BBD16(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_E9B6D8E5B61BBD16_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D4E92F2DE5F84390(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_D4E92F2DE5F84390_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8CA19C38C4390015_1(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678 a2)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_8CA19C38C4390015_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_0C1D4A9C7FAC9FD1(::MoleMole::Battle::Entity* a1, ::Class_3_8F19DA8B255A2CD0*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Class_3_8F19DA8B255A2CD0*&))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_0C1D4A9C7FAC9FD1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9E8571FD458418FE(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_9E8571FD458418FE_OFFSET))(a1);
	}

	static ::System::Void Method_1_7F592F9ED1C9D2B3_1(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678 a2, ::Struct_2_74E7456CEA16AA28 a3)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678, ::Struct_2_74E7456CEA16AA28))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1D65DCB5EBAF222B(::Nap::NapECS::EcsEntity* a1, ::System::Action_1<::MoleMole::Battle::Entity*>* a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_1D65DCB5EBAF222B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_2EF397ADE643D730(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*&))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_2EF397ADE643D730_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_827C776591806EC5(::System::Delegate* a1, ::Struct_2_9E75F47F2670B678 a2)
	{
		return ((::System::Void(*)(::System::Delegate*, ::Struct_2_9E75F47F2670B678))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_827C776591806EC5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_CB2342617EEF34D5(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_CB2342617EEF34D5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CF347C8679BFB90C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_CF347C8679BFB90C_OFFSET))(a1);
	}

	static ::System::Void Method_1_D7AE3ADCEC0977AB(::MoleMole::Battle::Entity* a1, ::Struct_2_433EAFD16930C7BA a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Struct_2_433EAFD16930C7BA))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_D7AE3ADCEC0977AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C6EDE7C446C8EB9B(::Nap::NapECS::EcsEntity* a1, ::System::Action_1<::MoleMole::Battle::Entity*>* a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_C6EDE7C446C8EB9B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_827C776591806EC5_1(::System::Delegate* a1, ::Struct_2_9E75F47F2670B678& a2)
	{
		return ((::System::Void(*)(::System::Delegate*, ::Struct_2_9E75F47F2670B678&))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_827C776591806EC5_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_370E5D42E7C51A6B(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_370E5D42E7C51A6B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_DBEA909AE97806F3(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_DBEA909AE97806F3_OFFSET))(a1);
	}

	static ::System::Void Method_1_D4E92F2DE5F84390_1(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_D4E92F2DE5F84390_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8856EAF4107B25FF_1(::MoleMole::Config::EntityType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_8856EAF4107B25FF_1_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_1_AED79AC0293F2CDF()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_AED79AC0293F2CDF_OFFSET))();
	}

	static ::System::Boolean Method_1_ADB9CAE7731998DE(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_ADB9CAE7731998DE_OFFSET))(a1);
	}

	static ::System::Void Method_1_827C776591806EC5_2(::System::Delegate* a1, ::Struct_2_9E75F47F2670B678 a2)
	{
		return ((::System::Void(*)(::System::Delegate*, ::Struct_2_9E75F47F2670B678))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_827C776591806EC5_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_68180F0A91B82372(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_68180F0A91B82372_OFFSET))(a1);
	}

	static ::System::Void Method_1_07CB65322854512A(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Enum_3_9F8D47E52A1FBE0C a2, ::Struct_2_9E75F47F2670B678 a3, ::Struct_2_74E7456CEA16AA28 a4)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Enum_3_9F8D47E52A1FBE0C, ::Struct_2_9E75F47F2670B678, ::Struct_2_74E7456CEA16AA28))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_07CB65322854512A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_13372D0D46A0DFC2(::System::Delegate* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::System::Delegate*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_13372D0D46A0DFC2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_03BECA41F284B408(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*& a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*&))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_03BECA41F284B408_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_75B7352D76660734(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_75B7352D76660734_OFFSET))(a1);
	}

	static ::System::Void Method_1_827C776591806EC5_3(::System::Delegate* a1, ::Struct_2_9E75F47F2670B678& a2)
	{
		return ((::System::Void(*)(::System::Delegate*, ::Struct_2_9E75F47F2670B678&))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_827C776591806EC5_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_020ABED03CAA3529(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_020ABED03CAA3529_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_36BABEFFF1166F4C(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_36BABEFFF1166F4C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_19E06618C5564B9A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_19E06618C5564B9A_OFFSET))(a1);
	}

	static ::System::Void Method_1_E9B6D8E5B61BBD16_1(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_E9B6D8E5B61BBD16_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8CA19C38C4390015_2(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678 a2)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_8CA19C38C4390015_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7F592F9ED1C9D2B3_2(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678 a2, ::Struct_2_74E7456CEA16AA28 a3)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678, ::Struct_2_74E7456CEA16AA28))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_674C0670CF2AC9E6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_674C0670CF2AC9E6_OFFSET))(a1);
	}

	static ::System::Void Method_1_C04B51087AB34F69(::System::Delegate* a1, ::Struct_2_9E75F47F2670B678& a2, ::Struct_2_9E75F47F2670B678& a3)
	{
		return ((::System::Void(*)(::System::Delegate*, ::Struct_2_9E75F47F2670B678&, ::Struct_2_9E75F47F2670B678&))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_C04B51087AB34F69_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_7F592F9ED1C9D2B3_3(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678 a2, ::Struct_2_186797E34BDAB9E2 a3)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678, ::Struct_2_186797E34BDAB9E2))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_8CA19C38C4390015_3(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678& a2)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678&))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_8CA19C38C4390015_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7E08D95B7FF5A527(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_7E08D95B7FF5A527_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6F8C886C25935819(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_6F8C886C25935819_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_20EA1EB28DFA8677(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_20EA1EB28DFA8677_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C79DC384F6A62AA7(::MoleMole::Battle::Entity* a1, ::Class_1_B7E341C5F1A6F199* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_C79DC384F6A62AA7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_CF347C8679BFB90C_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_CF347C8679BFB90C_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_956E6AF642FE5DCE(::System::Action_1<::Class_1_B7E341C5F1A6F199*>* a1, ::Struct_2_9E75F47F2670B678 a2)
	{
		return ((::System::Void(*)(::System::Action_1<::Class_1_B7E341C5F1A6F199*>*, ::Struct_2_9E75F47F2670B678))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_956E6AF642FE5DCE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_07CB65322854512A_1(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Enum_3_9F8D47E52A1FBE0C a2, ::Struct_2_9E75F47F2670B678 a3, ::Struct_2_186797E34BDAB9E2 a4)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Enum_3_9F8D47E52A1FBE0C, ::Struct_2_9E75F47F2670B678, ::Struct_2_186797E34BDAB9E2))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_07CB65322854512A_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_7F592F9ED1C9D2B3_4(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1, ::Struct_2_9E75F47F2670B678 a2, ::Struct_2_74E7456CEA16AA28 a3)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Struct_2_9E75F47F2670B678, ::Struct_2_74E7456CEA16AA28))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_7F592F9ED1C9D2B3_4_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_5BFB594B065344E0(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_5BFB594B065344E0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_07A1CFD9A2DAC97F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_07A1CFD9A2DAC97F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1C1ABC086DA40C0B(::MoleMole::Battle::Entity* a1, ::MoleMole::GameplayTag a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_1C1ABC086DA40C0B_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_0AC83E6040F3949A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_0AC83E6040F3949A_OFFSET))(a1);
	}

	static ::System::Void Method_1_54B9C454AB41352C(::System::Action_1<::Class_1_B7E341C5F1A6F199*>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::Class_1_B7E341C5F1A6F199*>*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_54B9C454AB41352C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1AB396F5D25B6697(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::ICollection_1<::System::String*>* a2, ::Enum_3_5430DDABF48F9EFB a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::ICollection_1<::System::String*>*, ::Enum_3_5430DDABF48F9EFB))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_1AB396F5D25B6697_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_8A12E364C1F9512D(::Nap::NapECS::QuickList_1<::Struct_2_A4204C1B14C9FC70>* a1, ::MoleMole::Battle::Entity* a2, ::Class_1_B7E341C5F1A6F199* a3)
	{
		return ((::System::Void(*)(::Nap::NapECS::QuickList_1<::Struct_2_A4204C1B14C9FC70>*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_8A12E364C1F9512D_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_50BD9A8E04B76E0E(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::ICollection_1<::System::String*>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::ICollection_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_50BD9A8E04B76E0E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_DBEA909AE97806F3_1(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_DBEA909AE97806F3_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_FB8A0D7682787C48(::System::Delegate* a1, ::Struct_2_9E75F47F2670B678 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::Delegate*, ::Struct_2_9E75F47F2670B678, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_FB8A0D7682787C48_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13372D0D46A0DFC2_1(::System::Delegate* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::System::Delegate*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_13372D0D46A0DFC2_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_0889EFD5B1516E28(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::ICollection_1<::System::String*>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::ICollection_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4FD3B0C7C38736F6_METHOD_1_0889EFD5B1516E28_OFFSET))(a1, a2, a3);
	}
};
