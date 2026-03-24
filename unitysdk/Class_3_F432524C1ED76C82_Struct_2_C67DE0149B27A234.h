#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class MonoCurveMoveObjectRopeHandler; }
namespace RootMotion::FinalIK { class FABRIK; }

#define CLASS_3_F432524C1ED76C82_STRUCT_2_C67DE0149B27A234_METHOD_2_16BB5DCA8F9733E8_OFFSET UNITYSDK_OFFSET(0x34C5F0)
#define CLASS_3_F432524C1ED76C82_STRUCT_2_C67DE0149B27A234_METHOD_2_776272FEED5AE92B_OFFSET UNITYSDK_OFFSET(0x34C600)

inline static constexpr unsigned int Class_3_F432524C1ED76C82_Struct_2_C67DE0149B27A234_TypeDefinitionIndex = 71497;

struct alignas(8) Class_3_F432524C1ED76C82_Struct_2_C67DE0149B27A234
{
	::MoleMole::MonoCurveMoveObjectRopeHandler* Field_2_0; // 0x10
	::RootMotion::FinalIK::FABRIK* Field_2_1; // 0x18

	/*
	::System::Void Method_2_16BB5DCA8F9733E8(::Class_3_F432524C1ED76C82_Struct_2_03D1D4D7DC6C5A00& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F432524C1ED76C82_Struct_2_03D1D4D7DC6C5A00&))((::PBYTE)hIl2Cpp + CLASS_3_F432524C1ED76C82_STRUCT_2_C67DE0149B27A234_METHOD_2_16BB5DCA8F9733E8_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_776272FEED5AE92B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F432524C1ED76C82_STRUCT_2_C67DE0149B27A234_METHOD_2_776272FEED5AE92B_OFFSET))(this);
	}
};
