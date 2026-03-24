#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_976C32A5F32B58FC.h"
#include "unitysdk/Class_2_0DB30C6C31E91732_Enum_3_13AF4B42B514E4FD.h"

class Class_2_8C4A02E118DF31DE;

#define CLASS_2_0DB30C6C31E91732_METHOD_2_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x6AC6060)
#define CLASS_2_0DB30C6C31E91732_METHOD_2_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0x6AC6330)
#define CLASS_2_0DB30C6C31E91732__CTOR_OFFSET UNITYSDK_OFFSET(0x6AC6040)

inline static constexpr unsigned int Class_2_0DB30C6C31E91732_TypeDefinitionIndex = 68882;

class Class_2_0DB30C6C31E91732 : public ::Class_1_976C32A5F32B58FC
{
public:
	::System::Boolean Field_2_0; // 0x28
	::System::Boolean Field_2_2; // 0x29
	::Class_2_0DB30C6C31E91732_Enum_3_13AF4B42B514E4FD Field_2_1; // 0x2C

	::System::Void _ctor(::Class_2_8C4A02E118DF31DE* a1, ::System::Boolean a2, ::Class_2_0DB30C6C31E91732_Enum_3_13AF4B42B514E4FD a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8C4A02E118DF31DE*, ::System::Boolean, ::Class_2_0DB30C6C31E91732_Enum_3_13AF4B42B514E4FD, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0DB30C6C31E91732__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB30C6C31E91732_METHOD_2_89C03AF435ED2C78_OFFSET))(this);
	}

	::System::Void Method_2_F53BAAE38A584428()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB30C6C31E91732_METHOD_2_F53BAAE38A584428_OFFSET))(this);
	}
};
