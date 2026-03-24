#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9CF591E9FCB0B5F1;
class Class_2_C98CD2116E71F5C1;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_AD7DF18F108F8373_METHOD_1_CB7B752A8844C098_OFFSET UNITYSDK_OFFSET(0x78A7C20)
#define CLASS_1_AD7DF18F108F8373_METHOD_1_F71FA1DD9750E5B3_OFFSET UNITYSDK_OFFSET(0x78A8490)

inline static constexpr unsigned int Class_1_AD7DF18F108F8373_TypeDefinitionIndex = 64092;

class Class_1_AD7DF18F108F8373 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_CB7B752A8844C098(::Class_2_9CF591E9FCB0B5F1* a1, ::System::Int32 a2, ::MoleMole::Battle::Entity* a3, ::Class_2_C98CD2116E71F5C1* a4)
	{
		return ((::System::Boolean(*)(::Class_2_9CF591E9FCB0B5F1*, ::System::Int32, ::MoleMole::Battle::Entity*, ::Class_2_C98CD2116E71F5C1*))((::PBYTE)hIl2Cpp + CLASS_1_AD7DF18F108F8373_METHOD_1_CB7B752A8844C098_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_F71FA1DD9750E5B3(::Class_2_9CF591E9FCB0B5F1* a1, ::System::Int32 a2, ::MoleMole::Battle::Entity* a3, ::Class_2_C98CD2116E71F5C1* a4)
	{
		return ((::System::Boolean(*)(::Class_2_9CF591E9FCB0B5F1*, ::System::Int32, ::MoleMole::Battle::Entity*, ::Class_2_C98CD2116E71F5C1*))((::PBYTE)hIl2Cpp + CLASS_1_AD7DF18F108F8373_METHOD_1_F71FA1DD9750E5B3_OFFSET))(a1, a2, a3, a4);
	}
};
