#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Enum_3_DB663931210BBC27_27.h"
#include "unitysdk/MoleMole/Config/BuddyBehaviourType.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_27B7CA8E521FEE12;
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_43AEE4D01119059E_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xD72B080)
#define CLASS_3_43AEE4D01119059E_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD72BF30)
#define CLASS_3_43AEE4D01119059E_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xD72D9C0)
#define CLASS_3_43AEE4D01119059E_METHOD_3_0A88EAAFBBCC4828_OFFSET UNITYSDK_OFFSET(0xD72E180)
#define CLASS_3_43AEE4D01119059E_METHOD_3_0B45825EEBBF6F19_1_OFFSET UNITYSDK_OFFSET(0xD7307B0)
#define CLASS_3_43AEE4D01119059E_METHOD_3_0B45825EEBBF6F19_OFFSET UNITYSDK_OFFSET(0xD72E000)
#define CLASS_3_43AEE4D01119059E_METHOD_3_0F27ED4CF248AA7D_OFFSET UNITYSDK_OFFSET(0xD72EF10)
#define CLASS_3_43AEE4D01119059E_METHOD_3_1FBC14D0160E2885_OFFSET UNITYSDK_OFFSET(0xD72F5B0)
#define CLASS_3_43AEE4D01119059E_METHOD_3_23E6BD45C7EFE07A_OFFSET UNITYSDK_OFFSET(0xD7326D0)
#define CLASS_3_43AEE4D01119059E_METHOD_3_258521B6B8BBFAB8_OFFSET UNITYSDK_OFFSET(0xD734F90)
#define CLASS_3_43AEE4D01119059E_METHOD_3_3110E4E8F534D28F_OFFSET UNITYSDK_OFFSET(0xD72D5A0)
#define CLASS_3_43AEE4D01119059E_METHOD_3_3122A00EEA747F1A_OFFSET UNITYSDK_OFFSET(0xD72F750)
#define CLASS_3_43AEE4D01119059E_METHOD_3_343D337EA1C47C4A_OFFSET UNITYSDK_OFFSET(0xD72CE10)
#define CLASS_3_43AEE4D01119059E_METHOD_3_348DC003C1172927_OFFSET UNITYSDK_OFFSET(0xD730030)
#define CLASS_3_43AEE4D01119059E_METHOD_3_379D4B587D2281FE_OFFSET UNITYSDK_OFFSET(0xD72D850)
#define CLASS_3_43AEE4D01119059E_METHOD_3_3DAC85E46154326C_OFFSET UNITYSDK_OFFSET(0xD732CE0)
#define CLASS_3_43AEE4D01119059E_METHOD_3_3F2A0F7DFB35CA3A_OFFSET UNITYSDK_OFFSET(0xD7303F0)
#define CLASS_3_43AEE4D01119059E_METHOD_3_40B82EDC642125F3_OFFSET UNITYSDK_OFFSET(0xD731910)
#define CLASS_3_43AEE4D01119059E_METHOD_3_41577A0703C03A94_OFFSET UNITYSDK_OFFSET(0xD72C0C0)
#define CLASS_3_43AEE4D01119059E_METHOD_3_4432610D68CF9AC2_OFFSET UNITYSDK_OFFSET(0xD72D650)
#define CLASS_3_43AEE4D01119059E_METHOD_3_460EA2652D11B056_OFFSET UNITYSDK_OFFSET(0xD7329C0)
#define CLASS_3_43AEE4D01119059E_METHOD_3_511757A27A4921DB_OFFSET UNITYSDK_OFFSET(0xD733570)
#define CLASS_3_43AEE4D01119059E_METHOD_3_58E936FCD5C57601_OFFSET UNITYSDK_OFFSET(0xD735180)
#define CLASS_3_43AEE4D01119059E_METHOD_3_60F0855BA2D29662_OFFSET UNITYSDK_OFFSET(0xD72ED10)
#define CLASS_3_43AEE4D01119059E_METHOD_3_664325B5AE1E4262_OFFSET UNITYSDK_OFFSET(0xD730250)
#define CLASS_3_43AEE4D01119059E_METHOD_3_6D71CC7A9DF62322_OFFSET UNITYSDK_OFFSET(0xD72B670)
#define CLASS_3_43AEE4D01119059E_METHOD_3_708199D64234CFA9_OFFSET UNITYSDK_OFFSET(0xD72C750)
#define CLASS_3_43AEE4D01119059E_METHOD_3_77F4D30C0398C773_OFFSET UNITYSDK_OFFSET(0xD731330)
#define CLASS_3_43AEE4D01119059E_METHOD_3_7D043231C1C7F8FA_OFFSET UNITYSDK_OFFSET(0xD730990)
#define CLASS_3_43AEE4D01119059E_METHOD_3_7D4E2AEB37B88CD7_OFFSET UNITYSDK_OFFSET(0xD7322C0)
#define CLASS_3_43AEE4D01119059E_METHOD_3_7F45343C4EC15A76_OFFSET UNITYSDK_OFFSET(0xD7336D0)
#define CLASS_3_43AEE4D01119059E_METHOD_3_86DBC40E78750406_OFFSET UNITYSDK_OFFSET(0xD731220)
#define CLASS_3_43AEE4D01119059E_METHOD_3_8B16D90B6B7EF1F3_OFFSET UNITYSDK_OFFSET(0xD72EA70)
#define CLASS_3_43AEE4D01119059E_METHOD_3_945661E9A8DC5BCA_OFFSET UNITYSDK_OFFSET(0xD734A90)
#define CLASS_3_43AEE4D01119059E_METHOD_3_96BC71B2295A154A_OFFSET UNITYSDK_OFFSET(0xD72C380)
#define CLASS_3_43AEE4D01119059E_METHOD_3_97D83E4CB3B11935_1_OFFSET UNITYSDK_OFFSET(0xD72FEA0)
#define CLASS_3_43AEE4D01119059E_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xD72CC80)
#define CLASS_3_43AEE4D01119059E_METHOD_3_ABE2DC27049547D4_OFFSET UNITYSDK_OFFSET(0xD735320)
#define CLASS_3_43AEE4D01119059E_METHOD_3_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0xD72DD30)
#define CLASS_3_43AEE4D01119059E_METHOD_3_AEF5743AF0613131_OFFSET UNITYSDK_OFFSET(0xD730E90)
#define CLASS_3_43AEE4D01119059E_METHOD_3_B2BB1576EDCDCBA6_OFFSET UNITYSDK_OFFSET(0xD72E9A0)
#define CLASS_3_43AEE4D01119059E_METHOD_3_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0xD731C60)
#define CLASS_3_43AEE4D01119059E_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xD7311B0)
#define CLASS_3_43AEE4D01119059E_METHOD_3_CA0C106E3DC09B53_OFFSET UNITYSDK_OFFSET(0xD730C20)
#define CLASS_3_43AEE4D01119059E_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD732260)
#define CLASS_3_43AEE4D01119059E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD730930)
#define CLASS_3_43AEE4D01119059E_METHOD_3_D12C875D541B5E4F_OFFSET UNITYSDK_OFFSET(0xD7355C0)
#define CLASS_3_43AEE4D01119059E_METHOD_3_DBB0CBEBC6215F6E_OFFSET UNITYSDK_OFFSET(0xD734CD0)
#define CLASS_3_43AEE4D01119059E_METHOD_3_E1E64DDBDFB57722_OFFSET UNITYSDK_OFFSET(0xD72F510)
#define CLASS_3_43AEE4D01119059E_METHOD_3_E23557679B03B8F7_OFFSET UNITYSDK_OFFSET(0xD72D390)
#define CLASS_3_43AEE4D01119059E_METHOD_3_E4F922BC98988130_OFFSET UNITYSDK_OFFSET(0xD72FD70)
#define CLASS_3_43AEE4D01119059E_METHOD_3_F098C4EC951B3DB9_OFFSET UNITYSDK_OFFSET(0xD72EBF0)
#define CLASS_3_43AEE4D01119059E_METHOD_3_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0xD7316F0)
#define CLASS_3_43AEE4D01119059E_METHOD_3_FB7329283E17717D_OFFSET UNITYSDK_OFFSET(0xD72C560)
#define CLASS_3_43AEE4D01119059E_METHOD_3_FD59872B9D0E7651_OFFSET UNITYSDK_OFFSET(0xD731EF0)
#define CLASS_3_43AEE4D01119059E_UPDATE_OFFSET UNITYSDK_OFFSET(0xD72B5C0)
#define CLASS_3_43AEE4D01119059E__CCTOR_OFFSET UNITYSDK_OFFSET(0xD72C050)
#define CLASS_3_43AEE4D01119059E__CTOR_OFFSET UNITYSDK_OFFSET(0xD72C030)

inline static constexpr unsigned int Class_3_43AEE4D01119059E_TypeDefinitionIndex = 64502;

class Class_3_43AEE4D01119059E : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::Action** StaticGet_Field_3_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_43AEE4D01119059E_TypeDefinitionIndex)->GetStaticField(0x39C50);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_3_3()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_43AEE4D01119059E_TypeDefinitionIndex)->GetStaticField(0x39C58);
	}
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_41577A0703C03A94(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_41577A0703C03A94_OFFSET))(a1);
	}

	static ::System::Void Method_3_97D83E4CB3B11935()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_97D83E4CB3B11935_OFFSET))();
	}

	static ::System::Void Method_3_343D337EA1C47C4A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_343D337EA1C47C4A_OFFSET))(a1);
	}

	static ::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_0865E94460F11643_OFFSET))();
	}

	static ::System::Void Method_3_0B45825EEBBF6F19(::MoleMole::Battle::AnimatorParamControl* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::AnimatorParamControl*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_0B45825EEBBF6F19_OFFSET))(a1);
	}

	static ::System::Void Method_3_379D4B587D2281FE(::Class_3_27B7CA8E521FEE12* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_27B7CA8E521FEE12*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_379D4B587D2281FE_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_B2BB1576EDCDCBA6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_B2BB1576EDCDCBA6_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_F098C4EC951B3DB9(::Class_3_27B7CA8E521FEE12* a1, ::Enum_3_DB663931210BBC27_27 a2)
	{
		return ((::System::Boolean(*)(::Class_3_27B7CA8E521FEE12*, ::Enum_3_DB663931210BBC27_27))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_F098C4EC951B3DB9_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::BuddyBehaviourType Method_3_60F0855BA2D29662(::Enum_3_DB663931210BBC27_27 a1)
	{
		return ((::MoleMole::Config::BuddyBehaviourType(*)(::Enum_3_DB663931210BBC27_27))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_60F0855BA2D29662_OFFSET))(a1);
	}

	static ::System::Void Method_3_0F27ED4CF248AA7D(::Enum_3_DB663931210BBC27_27 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Enum_3_DB663931210BBC27_27, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_0F27ED4CF248AA7D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_708199D64234CFA9(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_708199D64234CFA9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_E1E64DDBDFB57722(::Enum_3_DB663931210BBC27_27 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_DB663931210BBC27_27))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_E1E64DDBDFB57722_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_1FBC14D0160E2885(::Enum_3_DB663931210BBC27_27 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::Enum_3_DB663931210BBC27_27, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_1FBC14D0160E2885_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Battle::Entity* Method_3_96BC71B2295A154A()
	{
		return ((::MoleMole::Battle::Entity*(*)())((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_96BC71B2295A154A_OFFSET))();
	}

	static ::System::Void Method_3_E4F922BC98988130(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_E4F922BC98988130_OFFSET))(a1);
	}

	static ::System::Void Method_3_97D83E4CB3B11935_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_97D83E4CB3B11935_1_OFFSET))();
	}

	static ::MoleMole::Config::BuddyBehaviourType Method_3_348DC003C1172927(::Enum_3_DB663931210BBC27_27 a1, ::MoleMole::Config::BuddyBehaviourType a2)
	{
		return ((::MoleMole::Config::BuddyBehaviourType(*)(::Enum_3_DB663931210BBC27_27, ::MoleMole::Config::BuddyBehaviourType))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_348DC003C1172927_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_664325B5AE1E4262(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_664325B5AE1E4262_OFFSET))(a1);
	}

	static ::System::Void Method_3_3F2A0F7DFB35CA3A(::MoleMole::Config::BuddyTeamType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Config::BuddyTeamType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_3F2A0F7DFB35CA3A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0B45825EEBBF6F19_1(::MoleMole::Battle::AnimatorParamControl* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::AnimatorParamControl*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_0B45825EEBBF6F19_1_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_6D71CC7A9DF62322()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_6D71CC7A9DF62322_OFFSET))();
	}

	static ::System::Void Method_3_7D043231C1C7F8FA(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_7D043231C1C7F8FA_OFFSET))(a1);
	}

	static ::System::Void Method_3_AEF5743AF0613131(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_AEF5743AF0613131_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_86DBC40E78750406(::Class_3_27B7CA8E521FEE12* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_27B7CA8E521FEE12*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_86DBC40E78750406_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_77F4D30C0398C773(::MoleMole::Config::BuddyTeamType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Config::BuddyTeamType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_77F4D30C0398C773_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F4F1E7D1CC26024A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_F4F1E7D1CC26024A_OFFSET))(a1);
	}

	static ::System::Void Method_3_40B82EDC642125F3(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_40B82EDC642125F3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FB7329283E17717D(::Class_3_27B7CA8E521FEE12* a1, ::Nap::NapECS::EcsEntity* a2)
	{
		return ((::System::Void(*)(::Class_3_27B7CA8E521FEE12*, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_FB7329283E17717D_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigPosRot* Method_3_FD59872B9D0E7651(::Class_3_27B7CA8E521FEE12* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::MoleMole::Config::ConfigPosRot*(*)(::Class_3_27B7CA8E521FEE12*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_FD59872B9D0E7651_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Boolean Method_3_3110E4E8F534D28F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_3110E4E8F534D28F_OFFSET))(a1);
	}

	static ::System::Void Method_3_7D4E2AEB37B88CD7(::Enum_3_DB663931210BBC27_27 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Enum_3_DB663931210BBC27_27, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_7D4E2AEB37B88CD7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_460EA2652D11B056(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_460EA2652D11B056_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_3_3DAC85E46154326C(::Struct_2_FA5F50563E60AFBA a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::LayerMask a4)
	{
		return ((::UnityEngine::Vector3(*)(::Struct_2_FA5F50563E60AFBA, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_3DAC85E46154326C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_AE0B725AB77F7E6F_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_3_511757A27A4921DB(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_511757A27A4921DB_OFFSET))(a1);
	}

	static ::System::Void Method_3_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_B2C52ACF9D9B435B_OFFSET))();
	}

	static ::System::Void Method_3_7F45343C4EC15A76(::MoleMole::Config::ConfigPosRot* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean& a3, ::UnityEngine::Vector3& a4, ::System::Single& a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigPosRot*, ::MoleMole::Battle::Entity*, ::System::Boolean&, ::UnityEngine::Vector3&, ::System::Single&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_7F45343C4EC15A76_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_0A88EAAFBBCC4828(::Class_3_27B7CA8E521FEE12* a1, ::Nap::NapECS::EcsEntity* a2, ::Nap::NapECS::EcsEntity* a3)
	{
		return ((::System::Void(*)(::Class_3_27B7CA8E521FEE12*, ::Nap::NapECS::EcsEntity*, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_0A88EAAFBBCC4828_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_DBB0CBEBC6215F6E(::Enum_3_DB663931210BBC27_27 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_DB663931210BBC27_27))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_DBB0CBEBC6215F6E_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_945661E9A8DC5BCA(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_945661E9A8DC5BCA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_258521B6B8BBFAB8(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Config::ConfigPosRot* a3, ::Struct_2_FA5F50563E60AFBA a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigPosRot*, ::Struct_2_FA5F50563E60AFBA, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_258521B6B8BBFAB8_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::MoleMole::Config::BuddyBehaviourType Method_3_CA0C106E3DC09B53(::Enum_3_DB663931210BBC27_27 a1, ::MoleMole::Config::BuddyBehaviourType a2)
	{
		return ((::MoleMole::Config::BuddyBehaviourType(*)(::Enum_3_DB663931210BBC27_27, ::MoleMole::Config::BuddyBehaviourType))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_CA0C106E3DC09B53_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E23557679B03B8F7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_E23557679B03B8F7_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_58E936FCD5C57601(::Enum_3_DB663931210BBC27_27 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_DB663931210BBC27_27))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_58E936FCD5C57601_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_3122A00EEA747F1A(::Class_3_27B7CA8E521FEE12* a1, ::Enum_3_DB663931210BBC27_27 a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::Class_3_27B7CA8E521FEE12*, ::Enum_3_DB663931210BBC27_27, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_3122A00EEA747F1A_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_3_8B16D90B6B7EF1F3()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)())((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_8B16D90B6B7EF1F3_OFFSET))();
	}

	static ::System::Boolean Method_3_4432610D68CF9AC2(::Enum_3_DB663931210BBC27_27 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_DB663931210BBC27_27))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_4432610D68CF9AC2_OFFSET))(a1);
	}

	static ::System::Void Method_3_23E6BD45C7EFE07A(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_23E6BD45C7EFE07A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D12C875D541B5E4F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_D12C875D541B5E4F_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_ABE2DC27049547D4(::Class_3_27B7CA8E521FEE12* a1, ::Enum_3_DB663931210BBC27_27 a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::Class_3_27B7CA8E521FEE12*, ::Enum_3_DB663931210BBC27_27, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_43AEE4D01119059E_METHOD_3_ABE2DC27049547D4_OFFSET))(a1, a2, a3);
	}
};
