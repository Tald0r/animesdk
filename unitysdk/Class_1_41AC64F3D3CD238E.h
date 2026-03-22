#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_41AC64F3D3CD238E_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x828F6B0)
#define CLASS_1_41AC64F3D3CD238E_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x828F720)
#define CLASS_1_41AC64F3D3CD238E__CTOR_OFFSET UNITYSDK_OFFSET(0x828F7B0)

inline static constexpr unsigned int Class_1_41AC64F3D3CD238E_TypeDefinitionIndex = 51219;

class Class_1_41AC64F3D3CD238E : public ::System::Object
{
public:
	::System::UInt64 Field_1_2; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41AC64F3D3CD238E__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41AC64F3D3CD238E_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41AC64F3D3CD238E_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
