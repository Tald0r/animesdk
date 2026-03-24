#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Enum_3_215506A3B8D5C27F.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

class Class_1_B7E341C5F1A6F199;
class Class_1_CB7F0487F7A6164A;
class Class_2_196239041048FB4A;
class Class_2_44D59DDDD1D4E4A6;
class Class_2_B242825AD4217625;
class Class_3_AA3FB4F8297B1779;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_67E211B12A25998E_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x70DAB50)
#define CLASS_3_67E211B12A25998E_METHOD_3_006F10EEFB60DD32_OFFSET UNITYSDK_OFFSET(0x70DE0E0)
#define CLASS_3_67E211B12A25998E_METHOD_3_0555F657E93A6743_OFFSET UNITYSDK_OFFSET(0x70DCFA0)
#define CLASS_3_67E211B12A25998E_METHOD_3_1F8598F0E1ABA580_OFFSET UNITYSDK_OFFSET(0x70DF190)
#define CLASS_3_67E211B12A25998E_METHOD_3_2046920B4825F466_OFFSET UNITYSDK_OFFSET(0x70DCDA0)
#define CLASS_3_67E211B12A25998E_METHOD_3_20D1265D58651029_OFFSET UNITYSDK_OFFSET(0x70DF600)
#define CLASS_3_67E211B12A25998E_METHOD_3_314DE2754F38695B_OFFSET UNITYSDK_OFFSET(0x70DF480)
#define CLASS_3_67E211B12A25998E_METHOD_3_35AB387A77FC5996_OFFSET UNITYSDK_OFFSET(0x70DEA50)
#define CLASS_3_67E211B12A25998E_METHOD_3_42845EF49A75CCC9_OFFSET UNITYSDK_OFFSET(0x70DFAA0)
#define CLASS_3_67E211B12A25998E_METHOD_3_4FBE6B807DEB61CE_OFFSET UNITYSDK_OFFSET(0x70DFF80)
#define CLASS_3_67E211B12A25998E_METHOD_3_5DD821EEDC112837_OFFSET UNITYSDK_OFFSET(0x70DC960)
#define CLASS_3_67E211B12A25998E_METHOD_3_649E1690AF0B5860_OFFSET UNITYSDK_OFFSET(0x70DFCF0)
#define CLASS_3_67E211B12A25998E_METHOD_3_73AF3CA61A5B8B8F_OFFSET UNITYSDK_OFFSET(0x70DEC70)
#define CLASS_3_67E211B12A25998E_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x70DD8B0)
#define CLASS_3_67E211B12A25998E_METHOD_3_A6A7B1766BC58C64_OFFSET UNITYSDK_OFFSET(0x70DB1B0)
#define CLASS_3_67E211B12A25998E_METHOD_3_A6FBD63FB2A4A6CD_OFFSET UNITYSDK_OFFSET(0x70DD910)
#define CLASS_3_67E211B12A25998E_METHOD_3_AA7B5EEAC4068D02_OFFSET UNITYSDK_OFFSET(0x70DFD60)
#define CLASS_3_67E211B12A25998E_METHOD_3_B2B7A5FDEFB40F76_OFFSET UNITYSDK_OFFSET(0x70DD820)
#define CLASS_3_67E211B12A25998E_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x70DE070)
#define CLASS_3_67E211B12A25998E_METHOD_3_BF12EFAD6F1EE49E_OFFSET UNITYSDK_OFFSET(0x70DDCD0)
#define CLASS_3_67E211B12A25998E_METHOD_3_C1C31B670DD39237_OFFSET UNITYSDK_OFFSET(0x70DD370)
#define CLASS_3_67E211B12A25998E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x70DC610)
#define CLASS_3_67E211B12A25998E_METHOD_3_CB1F92E880D50BE5_OFFSET UNITYSDK_OFFSET(0x70DF9D0)
#define CLASS_3_67E211B12A25998E_METHOD_3_CFC2D6D6E9B1C859_OFFSET UNITYSDK_OFFSET(0x70DB290)
#define CLASS_3_67E211B12A25998E_METHOD_3_D03B8921C6CC2B5B_OFFSET UNITYSDK_OFFSET(0x70DC670)
#define CLASS_3_67E211B12A25998E_METHOD_3_D1D41AD07B81120B_OFFSET UNITYSDK_OFFSET(0x70DEB90)
#define CLASS_3_67E211B12A25998E_METHOD_3_D21E5D2729A6FFC1_OFFSET UNITYSDK_OFFSET(0x70DFBE0)
#define CLASS_3_67E211B12A25998E_UPDATE_OFFSET UNITYSDK_OFFSET(0x70DB010)
#define CLASS_3_67E211B12A25998E__CTOR_OFFSET UNITYSDK_OFFSET(0x70DB190)

inline static constexpr unsigned int Class_3_67E211B12A25998E_TypeDefinitionIndex = 74809;

class Class_3_67E211B12A25998E : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_A6A7B1766BC58C64(::Class_3_AA3FB4F8297B1779* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_AA3FB4F8297B1779*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_A6A7B1766BC58C64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CFC2D6D6E9B1C859(::Class_3_AA3FB4F8297B1779* a1, ::Struct_2_FA5F50563E60AFBA a2, ::System::String* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Single a6, ::System::String* a7, ::System::Boolean a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::Class_3_AA3FB4F8297B1779*, ::Struct_2_FA5F50563E60AFBA, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_CFC2D6D6E9B1C859_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_D03B8921C6CC2B5B(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_D03B8921C6CC2B5B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C1C31B670DD39237(::Class_3_AA3FB4F8297B1779* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::Class_3_AA3FB4F8297B1779*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_C1C31B670DD39237_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_B2B7A5FDEFB40F76(::Class_3_AA3FB4F8297B1779* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AA3FB4F8297B1779*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_B2B7A5FDEFB40F76_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_A6FBD63FB2A4A6CD(::Class_3_AA3FB4F8297B1779* a1, ::Enum_3_215506A3B8D5C27F a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::Class_3_AA3FB4F8297B1779*, ::Enum_3_215506A3B8D5C27F, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_A6FBD63FB2A4A6CD_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_006F10EEFB60DD32(::Class_3_AA3FB4F8297B1779* a1)
	{
		return ((::System::Void(*)(::Class_3_AA3FB4F8297B1779*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_006F10EEFB60DD32_OFFSET))(a1);
	}

	static ::System::Void Method_3_D1D41AD07B81120B(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_D1D41AD07B81120B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1F8598F0E1ABA580(::Class_3_AA3FB4F8297B1779* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_AA3FB4F8297B1779*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_1F8598F0E1ABA580_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_314DE2754F38695B(::Class_3_AA3FB4F8297B1779* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_AA3FB4F8297B1779*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_314DE2754F38695B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_20D1265D58651029(::System::Single a1, ::Class_3_AA3FB4F8297B1779* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_3_AA3FB4F8297B1779*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_20D1265D58651029_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0555F657E93A6743(::Class_3_AA3FB4F8297B1779* a1)
	{
		return ((::System::Void(*)(::Class_3_AA3FB4F8297B1779*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_0555F657E93A6743_OFFSET))(a1);
	}

	static ::System::Void Method_3_35AB387A77FC5996(::Class_3_AA3FB4F8297B1779* a1, ::Struct_2_FA5F50563E60AFBA a2, ::System::String* a3, ::System::Boolean a4, ::System::Single a5, ::System::String* a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::Class_3_AA3FB4F8297B1779*, ::Struct_2_FA5F50563E60AFBA, ::System::String*, ::System::Boolean, ::System::Single, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_35AB387A77FC5996_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Void Method_3_BF12EFAD6F1EE49E(::Class_3_AA3FB4F8297B1779* a1, ::System::Boolean a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::Class_3_AA3FB4F8297B1779*, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_BF12EFAD6F1EE49E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_73AF3CA61A5B8B8F(::Class_2_44D59DDDD1D4E4A6* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_44D59DDDD1D4E4A6*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_73AF3CA61A5B8B8F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_42845EF49A75CCC9(::Class_3_AA3FB4F8297B1779* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_AA3FB4F8297B1779*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_42845EF49A75CCC9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D21E5D2729A6FFC1(::System::Single a1, ::Class_3_AA3FB4F8297B1779* a2)
	{
		return ((::System::Void(*)(::System::Single, ::Class_3_AA3FB4F8297B1779*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_D21E5D2729A6FFC1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AA7B5EEAC4068D02(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_AA7B5EEAC4068D02_OFFSET))(a1);
	}

	static ::System::Void Method_3_2046920B4825F466(::Class_2_196239041048FB4A* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_196239041048FB4A*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_2046920B4825F466_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4FBE6B807DEB61CE(::Class_3_AA3FB4F8297B1779* a1, ::Class_1_CB7F0487F7A6164A* a2, ::Class_1_CB7F0487F7A6164A* a3)
	{
		return ((::System::Void(*)(::Class_3_AA3FB4F8297B1779*, ::Class_1_CB7F0487F7A6164A*, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_4FBE6B807DEB61CE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_5DD821EEDC112837(::Class_2_B242825AD4217625* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_B242825AD4217625*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_5DD821EEDC112837_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CB1F92E880D50BE5(::Class_3_AA3FB4F8297B1779* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AA3FB4F8297B1779*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_CB1F92E880D50BE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_649E1690AF0B5860(::Class_3_AA3FB4F8297B1779* a1)
	{
		return ((::System::Void(*)(::Class_3_AA3FB4F8297B1779*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E_METHOD_3_649E1690AF0B5860_OFFSET))(a1);
	}
};
