#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E9C0DA902810772E_Enum_3_2EA03DA8096A1B80.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Enum_3_1003E4A6E5149B9E.h"
#include "unitysdk/Enum_3_1A3450664E1488DB.h"
#include "unitysdk/Enum_3_3DFF974943A619B7.h"
#include "unitysdk/Enum_3_3DFF974943A619B7_1.h"
#include "unitysdk/Enum_3_63B88169304F33FD.h"
#include "unitysdk/Enum_3_B7E66D8760FABD1A.h"
#include "unitysdk/Enum_3_C2761E57EE0B71AF.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7A5F167CAAA013FB;
class Class_1_B7E341C5F1A6F199;
class Class_2_3EB92686D65E00AD;
class Class_3_883E597458B91E77_1;
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_56523FE351738797_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x8612AB0)
#define CLASS_3_56523FE351738797_METHOD_3_03C7462F74112AAF_OFFSET UNITYSDK_OFFSET(0x8618200)
#define CLASS_3_56523FE351738797_METHOD_3_08C5832E9065CB80_OFFSET UNITYSDK_OFFSET(0x8618C00)
#define CLASS_3_56523FE351738797_METHOD_3_0B4023A024B6D6FD_OFFSET UNITYSDK_OFFSET(0x86146D0)
#define CLASS_3_56523FE351738797_METHOD_3_1AFC2A5CC7444903_OFFSET UNITYSDK_OFFSET(0x8613860)
#define CLASS_3_56523FE351738797_METHOD_3_29782F49A707E0FB_OFFSET UNITYSDK_OFFSET(0x8618510)
#define CLASS_3_56523FE351738797_METHOD_3_2DEEB96216120ABF_OFFSET UNITYSDK_OFFSET(0x8618320)
#define CLASS_3_56523FE351738797_METHOD_3_31CD2536DA8756EE_OFFSET UNITYSDK_OFFSET(0x8613A10)
#define CLASS_3_56523FE351738797_METHOD_3_43341636829AEC38_OFFSET UNITYSDK_OFFSET(0x8614660)
#define CLASS_3_56523FE351738797_METHOD_3_4850B3E1C1F21488_OFFSET UNITYSDK_OFFSET(0x86176A0)
#define CLASS_3_56523FE351738797_METHOD_3_48DCA1C9DC4A4F56_OFFSET UNITYSDK_OFFSET(0x8619020)
#define CLASS_3_56523FE351738797_METHOD_3_55D6F26DEBC16E77_OFFSET UNITYSDK_OFFSET(0x86136E0)
#define CLASS_3_56523FE351738797_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x86181A0)
#define CLASS_3_56523FE351738797_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x86184B0)
#define CLASS_3_56523FE351738797_METHOD_3_582AFEBA95488738_OFFSET UNITYSDK_OFFSET(0x8617250)
#define CLASS_3_56523FE351738797_METHOD_3_5883F346842E7D3D_OFFSET UNITYSDK_OFFSET(0x86166A0)
#define CLASS_3_56523FE351738797_METHOD_3_5AB927C878E8F486_OFFSET UNITYSDK_OFFSET(0x8615160)
#define CLASS_3_56523FE351738797_METHOD_3_5E0D2085FF78DE31_1_OFFSET UNITYSDK_OFFSET(0x8617B60)
#define CLASS_3_56523FE351738797_METHOD_3_5E0D2085FF78DE31_OFFSET UNITYSDK_OFFSET(0x8614490)
#define CLASS_3_56523FE351738797_METHOD_3_6EDD3A886947DEB0_OFFSET UNITYSDK_OFFSET(0x8613780)
#define CLASS_3_56523FE351738797_METHOD_3_88B608654D523455_OFFSET UNITYSDK_OFFSET(0x86193E0)
#define CLASS_3_56523FE351738797_METHOD_3_9F6A6662686241E4_1_OFFSET UNITYSDK_OFFSET(0x86171A0)
#define CLASS_3_56523FE351738797_METHOD_3_9F6A6662686241E4_OFFSET UNITYSDK_OFFSET(0x8614B20)
#define CLASS_3_56523FE351738797_METHOD_3_A32D2AB90BE74641_OFFSET UNITYSDK_OFFSET(0x8617A10)
#define CLASS_3_56523FE351738797_METHOD_3_A8466A8D814425A6_OFFSET UNITYSDK_OFFSET(0x8617D40)
#define CLASS_3_56523FE351738797_METHOD_3_AA7FAA47FD03C18E_OFFSET UNITYSDK_OFFSET(0x8618C90)
#define CLASS_3_56523FE351738797_METHOD_3_AB7445F484AE6839_OFFSET UNITYSDK_OFFSET(0x86132B0)
#define CLASS_3_56523FE351738797_METHOD_3_ADBF0BA4DF382DA7_OFFSET UNITYSDK_OFFSET(0x8617E20)
#define CLASS_3_56523FE351738797_METHOD_3_B1A7899A4E34F83F_OFFSET UNITYSDK_OFFSET(0x86187B0)
#define CLASS_3_56523FE351738797_METHOD_3_B3E229B668ACCF23_1_OFFSET UNITYSDK_OFFSET(0x861A430)
#define CLASS_3_56523FE351738797_METHOD_3_B3E229B668ACCF23_2_OFFSET UNITYSDK_OFFSET(0x861A5E0)
#define CLASS_3_56523FE351738797_METHOD_3_B3E229B668ACCF23_OFFSET UNITYSDK_OFFSET(0x8619540)
#define CLASS_3_56523FE351738797_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x861A730)
#define CLASS_3_56523FE351738797_METHOD_3_BED82C557EE24F50_OFFSET UNITYSDK_OFFSET(0x8617F60)
#define CLASS_3_56523FE351738797_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x861A580)
#define CLASS_3_56523FE351738797_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8618450)
#define CLASS_3_56523FE351738797_METHOD_3_CC029FDEACAE7103_OFFSET UNITYSDK_OFFSET(0x861A7A0)
#define CLASS_3_56523FE351738797_METHOD_3_D7A5A37ED27E8775_1_OFFSET UNITYSDK_OFFSET(0x8615D50)
#define CLASS_3_56523FE351738797_METHOD_3_D7A5A37ED27E8775_OFFSET UNITYSDK_OFFSET(0x86153F0)
#define CLASS_3_56523FE351738797_METHOD_3_D7CF8B1A1FB9B0B2_OFFSET UNITYSDK_OFFSET(0x861A110)
#define CLASS_3_56523FE351738797_METHOD_3_D87CB08AB764EA70_OFFSET UNITYSDK_OFFSET(0x8614BD0)
#define CLASS_3_56523FE351738797_METHOD_3_E6DB4E39F0C244A9_OFFSET UNITYSDK_OFFSET(0x8614100)
#define CLASS_3_56523FE351738797_METHOD_3_F0849E6F5E947BE7_OFFSET UNITYSDK_OFFSET(0x8619690)
#define CLASS_3_56523FE351738797_METHOD_3_F4797B9EB54D1CE0_OFFSET UNITYSDK_OFFSET(0x8613ED0)
#define CLASS_3_56523FE351738797_METHOD_3_FA9DCC7A9D1D05C4_OFFSET UNITYSDK_OFFSET(0x8614D40)
#define CLASS_3_56523FE351738797_UPDATE_OFFSET UNITYSDK_OFFSET(0x8612F90)
#define CLASS_3_56523FE351738797_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x8613110)
#define CLASS_3_56523FE351738797__CTOR_OFFSET UNITYSDK_OFFSET(0x8613290)

inline static constexpr unsigned int Class_3_56523FE351738797_TypeDefinitionIndex = 70282;

class Class_3_56523FE351738797 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_UPDATE_OFFSET))(this);
	}

	::System::Void WaitForFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_WAITFORFIXEDUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_AB7445F484AE6839(::Class_3_883E597458B91E77_1* a1)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_AB7445F484AE6839_OFFSET))(a1);
	}

	static ::System::Void Method_3_31CD2536DA8756EE(::Class_3_883E597458B91E77_1* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_31CD2536DA8756EE_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_F4797B9EB54D1CE0(::Class_3_883E597458B91E77_1* a1, ::Enum_3_3DFF974943A619B7 a2, ::System::Int32 a3, ::Enum_3_3DFF974943A619B7_1& a4, ::System::Int32& a5, ::MoleMole::Config::AidAttackType& a6)
	{
		return ((::System::Boolean(*)(::Class_3_883E597458B91E77_1*, ::Enum_3_3DFF974943A619B7, ::System::Int32, ::Enum_3_3DFF974943A619B7_1&, ::System::Int32&, ::MoleMole::Config::AidAttackType&))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_F4797B9EB54D1CE0_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_E6DB4E39F0C244A9(::Class_3_883E597458B91E77_1* a1)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_E6DB4E39F0C244A9_OFFSET))(a1);
	}

	static ::System::Void Method_3_5E0D2085FF78DE31(::Class_3_883E597458B91E77_1* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_5E0D2085FF78DE31_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1AFC2A5CC7444903(::Class_3_883E597458B91E77_1* a1)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_1AFC2A5CC7444903_OFFSET))(a1);
	}

	static ::System::Void Method_3_43341636829AEC38(::Class_3_883E597458B91E77_1* a1, ::Enum_3_1A3450664E1488DB a2)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*, ::Enum_3_1A3450664E1488DB))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_43341636829AEC38_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0B4023A024B6D6FD(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_0B4023A024B6D6FD_OFFSET))(a1);
	}

	static ::System::Void Method_3_D87CB08AB764EA70(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_D87CB08AB764EA70_OFFSET))(a1);
	}

	static ::System::Void Method_3_FA9DCC7A9D1D05C4(::Class_3_883E597458B91E77_1* a1, ::Enum_3_3DFF974943A619B7 a2, ::System::Int32 a3, ::System::String* a4, ::Enum_3_3DFF974943A619B7_1 a5, ::System::Int32 a6, ::MoleMole::Config::AidAttackType a7)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*, ::Enum_3_3DFF974943A619B7, ::System::Int32, ::System::String*, ::Enum_3_3DFF974943A619B7_1, ::System::Int32, ::MoleMole::Config::AidAttackType))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_FA9DCC7A9D1D05C4_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_D7A5A37ED27E8775(::Class_3_883E597458B91E77_1* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_D7A5A37ED27E8775_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D7A5A37ED27E8775_1(::Class_3_883E597458B91E77_1* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_D7A5A37ED27E8775_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5883F346842E7D3D(::MoleMole::Battle::Entity* a1, ::Class_2_E9C0DA902810772E_Enum_3_2EA03DA8096A1B80 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_E9C0DA902810772E_Enum_3_2EA03DA8096A1B80))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_5883F346842E7D3D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_582AFEBA95488738(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_582AFEBA95488738_OFFSET))(a1);
	}

	static ::System::Void Method_3_4850B3E1C1F21488(::Class_3_883E597458B91E77_1* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::MoleMole::Config::AidAttackType>* a3)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AidAttackType>*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_4850B3E1C1F21488_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_A32D2AB90BE74641(::Class_3_883E597458B91E77_1* a1, ::System::String* a2, ::Enum_3_C2761E57EE0B71AF a3)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*, ::System::String*, ::Enum_3_C2761E57EE0B71AF))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_A32D2AB90BE74641_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_A8466A8D814425A6(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_A8466A8D814425A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BED82C557EE24F50(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_BED82C557EE24F50_OFFSET))(a1);
	}

	static ::System::Void Method_3_03C7462F74112AAF(::Class_3_883E597458B91E77_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_03C7462F74112AAF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_ADBF0BA4DF382DA7(::Class_2_3EB92686D65E00AD* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::Class_2_3EB92686D65E00AD*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_ADBF0BA4DF382DA7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_2DEEB96216120ABF(::Class_3_883E597458B91E77_1* a1, ::MoleMole::Config::AidAttackType a2)
	{
		return ((::System::Boolean(*)(::Class_3_883E597458B91E77_1*, ::MoleMole::Config::AidAttackType))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_2DEEB96216120ABF_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_3_5AB927C878E8F486(::Class_3_883E597458B91E77_1* a1, ::Enum_3_3DFF974943A619B7 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*, ::Enum_3_3DFF974943A619B7, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_5AB927C878E8F486_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_29782F49A707E0FB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_29782F49A707E0FB_OFFSET))(a1);
	}

	static ::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_5790A55946AA509D_1_OFFSET))();
	}

	static ::System::Void Method_3_08C5832E9065CB80(::MoleMole::Battle::Entity* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_08C5832E9065CB80_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_88B608654D523455(::Class_3_883E597458B91E77_1* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_88B608654D523455_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_B3E229B668ACCF23(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_B3E229B668ACCF23_OFFSET))(a1);
	}

	static ::System::Void Method_3_48DCA1C9DC4A4F56(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_48DCA1C9DC4A4F56_OFFSET))(a1);
	}

	static ::System::Void Method_3_F0849E6F5E947BE7(::Class_3_883E597458B91E77_1* a1, ::MoleMole::Battle::AnimatorParamControl* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::Enum_3_1003E4A6E5149B9E a6, ::Enum_3_63B88169304F33FD a7, ::Enum_3_C2761E57EE0B71AF a8, ::MoleMole::Config::AidAttackType a9, ::System::Boolean a10, ::Enum_3_B7E66D8760FABD1A a11, ::Enum_3_3DFF974943A619B7 a12, ::System::Collections::Generic::HashSet_1<::System::String*>* a13)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*, ::MoleMole::Battle::AnimatorParamControl*, ::System::Single, ::System::Int32, ::System::Single, ::Enum_3_1003E4A6E5149B9E, ::Enum_3_63B88169304F33FD, ::Enum_3_C2761E57EE0B71AF, ::MoleMole::Config::AidAttackType, ::System::Boolean, ::Enum_3_B7E66D8760FABD1A, ::Enum_3_3DFF974943A619B7, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_F0849E6F5E947BE7_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
	}

	static ::System::Void Method_3_B3E229B668ACCF23_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_B3E229B668ACCF23_1_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_55D6F26DEBC16E77(::Class_3_883E597458B91E77_1* a1)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_55D6F26DEBC16E77_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_9F6A6662686241E4(::System::Single a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_9F6A6662686241E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5E0D2085FF78DE31_1(::Class_3_883E597458B91E77_1* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_5E0D2085FF78DE31_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B3E229B668ACCF23_2(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_B3E229B668ACCF23_2_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_9F6A6662686241E4_1(::System::Single a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_9F6A6662686241E4_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AA7FAA47FD03C18E(::MoleMole::Battle::Entity* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_AA7FAA47FD03C18E_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_B1A7899A4E34F83F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_B1A7899A4E34F83F_OFFSET))(a1);
	}

	static ::System::Void Method_3_D7CF8B1A1FB9B0B2(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_D7CF8B1A1FB9B0B2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CC029FDEACAE7103(::Class_3_883E597458B91E77_1* a1, ::MoleMole::Battle::AnimatorParamControl* a2, ::Class_1_7A5F167CAAA013FB* a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Single a6, ::System::Int32 a7, ::System::Single a8, ::Enum_3_1003E4A6E5149B9E a9, ::Enum_3_63B88169304F33FD a10, ::Enum_3_C2761E57EE0B71AF a11, ::MoleMole::Config::AidAttackType a12, ::System::Boolean a13, ::Enum_3_B7E66D8760FABD1A a14, ::System::Boolean a15, ::System::Boolean a16, ::Enum_3_3DFF974943A619B7 a17, ::System::Boolean a18, ::System::Collections::Generic::HashSet_1<::System::String*>* a19)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*, ::MoleMole::Battle::AnimatorParamControl*, ::Class_1_7A5F167CAAA013FB*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::Enum_3_1003E4A6E5149B9E, ::Enum_3_63B88169304F33FD, ::Enum_3_C2761E57EE0B71AF, ::MoleMole::Config::AidAttackType, ::System::Boolean, ::Enum_3_B7E66D8760FABD1A, ::System::Boolean, ::System::Boolean, ::Enum_3_3DFF974943A619B7, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_CC029FDEACAE7103_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
	}

	static ::System::Void Method_3_6EDD3A886947DEB0(::Class_3_883E597458B91E77_1* a1)
	{
		return ((::System::Void(*)(::Class_3_883E597458B91E77_1*))((::PBYTE)hIl2Cpp + CLASS_3_56523FE351738797_METHOD_3_6EDD3A886947DEB0_OFFSET))(a1);
	}
};
