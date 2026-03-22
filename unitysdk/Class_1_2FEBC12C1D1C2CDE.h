#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_65FE0282E8B727BF;
template <typename T> class Class_1_4370A311F770E7F6;

#define CLASS_1_2FEBC12C1D1C2CDE_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x1AF68590)
#define CLASS_1_2FEBC12C1D1C2CDE_METHOD_1_790C9B0898894FC9_OFFSET UNITYSDK_OFFSET(0x1AF684D0)
#define CLASS_1_2FEBC12C1D1C2CDE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF68470)

inline static constexpr unsigned int Class_1_2FEBC12C1D1C2CDE_TypeDefinitionIndex = 25057;

class Class_1_2FEBC12C1D1C2CDE : public ::System::Object
{
public:
	static ::Class_1_4370A311F770E7F6<::Class_1_65FE0282E8B727BF*>** StaticGet_Field_1_0()
	{
		return (::Class_1_4370A311F770E7F6<::Class_1_65FE0282E8B727BF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FEBC12C1D1C2CDE_TypeDefinitionIndex)->GetStaticField(0x1E1F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FEBC12C1D1C2CDE__CCTOR_OFFSET))();
	}

	static ::Class_1_65FE0282E8B727BF* Method_1_790C9B0898894FC9()
	{
		return ((::Class_1_65FE0282E8B727BF*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FEBC12C1D1C2CDE_METHOD_1_790C9B0898894FC9_OFFSET))();
	}

	static ::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FEBC12C1D1C2CDE_METHOD_1_17BD30EFE8176014_OFFSET))();
	}
};
