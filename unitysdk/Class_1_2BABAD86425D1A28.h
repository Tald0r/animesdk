#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/Struct_2_02E84E3D148EE908.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2BABAD86425D1A28_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x6F226B0)
#define CLASS_1_2BABAD86425D1A28_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x6F22630)
#define CLASS_1_2BABAD86425D1A28_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x6F22790)
#define CLASS_1_2BABAD86425D1A28_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6F22730)
#define CLASS_1_2BABAD86425D1A28__CTOR_OFFSET UNITYSDK_OFFSET(0x6F22620)

inline static constexpr unsigned int Class_1_2BABAD86425D1A28_TypeDefinitionIndex = 73637;

class Class_1_2BABAD86425D1A28 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::Struct_2_02E84E3D148EE908 Field_1_2; // 0x14
	::MoleMole::HollowChessboard::HollowChessboardUID Field_1_1; // 0x1C

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::Struct_2_02E84E3D148EE908 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::Struct_2_02E84E3D148EE908))((::PBYTE)hIl2Cpp + CLASS_1_2BABAD86425D1A28__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BABAD86425D1A28_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BABAD86425D1A28_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BABAD86425D1A28_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BABAD86425D1A28_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
