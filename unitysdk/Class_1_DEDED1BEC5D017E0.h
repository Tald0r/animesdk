#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_322;
class Class_1_F6F23F01FA52F5CD;
class Class_3_90D56F88EBAF454B;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_DEDED1BEC5D017E0_METHOD_1_3E511946045B51DA_OFFSET UNITYSDK_OFFSET(0xAAED1E0)
#define CLASS_1_DEDED1BEC5D017E0_METHOD_1_90D9A90632120617_OFFSET UNITYSDK_OFFSET(0xAAED4E0)
#define CLASS_1_DEDED1BEC5D017E0_METHOD_1_A4D6B6FB1DF145F2_OFFSET UNITYSDK_OFFSET(0xAAED160)

inline static constexpr unsigned int Class_1_DEDED1BEC5D017E0_TypeDefinitionIndex = 70499;

class Class_1_DEDED1BEC5D017E0 : public ::System::Object
{
public:
	static ::System::Void Method_1_A4D6B6FB1DF145F2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DEDED1BEC5D017E0_METHOD_1_A4D6B6FB1DF145F2_OFFSET))(a1);
	}

	static ::Class_3_90D56F88EBAF454B* Method_1_3E511946045B51DA()
	{
		return ((::Class_3_90D56F88EBAF454B*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DEDED1BEC5D017E0_METHOD_1_3E511946045B51DA_OFFSET))();
	}

	static ::Class_1_F6F23F01FA52F5CD* Method_1_90D9A90632120617(::Class_0_16E4307DCC419505_322* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::Class_1_F6F23F01FA52F5CD*(*)(::Class_0_16E4307DCC419505_322*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_DEDED1BEC5D017E0_METHOD_1_90D9A90632120617_OFFSET))(a1, a2);
	}
};
