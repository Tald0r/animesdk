#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_86CE7383FC519CAE;
class Class_3_86CE7383FC519CAE_Class_3_690B4E0207F7991E;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_BD6936D312B932EB_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x6F51940)
#define CLASS_3_BD6936D312B932EB_METHOD_3_4995D0B7431516F9_OFFSET UNITYSDK_OFFSET(0x6F52740)
#define CLASS_3_BD6936D312B932EB_METHOD_3_5CF7366E2012E729_OFFSET UNITYSDK_OFFSET(0x6F53050)
#define CLASS_3_BD6936D312B932EB_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x6F52FE0)
#define CLASS_3_BD6936D312B932EB_METHOD_3_BDE232F66633F858_OFFSET UNITYSDK_OFFSET(0x6F51C20)
#define CLASS_3_BD6936D312B932EB_METHOD_3_C8A59F1B6B6A0559_1_OFFSET UNITYSDK_OFFSET(0x6F52DE0)
#define CLASS_3_BD6936D312B932EB_METHOD_3_C8A59F1B6B6A0559_OFFSET UNITYSDK_OFFSET(0x6F52BE0)
#define CLASS_3_BD6936D312B932EB_METHOD_3_CED5D882855A55E5_OFFSET UNITYSDK_OFFSET(0x6F52190)
#define CLASS_3_BD6936D312B932EB__CTOR_OFFSET UNITYSDK_OFFSET(0x6F51C00)

inline static constexpr unsigned int Class_3_BD6936D312B932EB_TypeDefinitionIndex = 44047;

class Class_3_BD6936D312B932EB : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD6936D312B932EB__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_BD6936D312B932EB_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_BDE232F66633F858(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_BD6936D312B932EB_METHOD_3_BDE232F66633F858_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C8A59F1B6B6A0559(::Class_3_86CE7383FC519CAE_Class_3_690B4E0207F7991E* a1)
	{
		return ((::System::Void(*)(::Class_3_86CE7383FC519CAE_Class_3_690B4E0207F7991E*))((::PBYTE)hIl2Cpp + CLASS_3_BD6936D312B932EB_METHOD_3_C8A59F1B6B6A0559_OFFSET))(a1);
	}

	static ::System::Void Method_3_C8A59F1B6B6A0559_1(::Class_3_86CE7383FC519CAE_Class_3_690B4E0207F7991E* a1)
	{
		return ((::System::Void(*)(::Class_3_86CE7383FC519CAE_Class_3_690B4E0207F7991E*))((::PBYTE)hIl2Cpp + CLASS_3_BD6936D312B932EB_METHOD_3_C8A59F1B6B6A0559_1_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_BD6936D312B932EB_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5CF7366E2012E729(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_BD6936D312B932EB_METHOD_3_5CF7366E2012E729_OFFSET))(a1);
	}

	static ::System::Void Method_3_CED5D882855A55E5(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_BD6936D312B932EB_METHOD_3_CED5D882855A55E5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4995D0B7431516F9(::MoleMole::Battle::Entity* a1, ::Class_3_86CE7383FC519CAE* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_86CE7383FC519CAE*))((::PBYTE)hIl2Cpp + CLASS_3_BD6936D312B932EB_METHOD_3_4995D0B7431516F9_OFFSET))(a1, a2);
	}
};
