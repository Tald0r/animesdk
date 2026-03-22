#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_DFEB9A1A221CB8BE;
namespace MoleMole::Vehicle { class VehicleTestCameraMono; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_B1FF30568AFC75CB_METHOD_2_80E623F60C48CE30_OFFSET UNITYSDK_OFFSET(0x771CC70)
#define STRUCT_2_B1FF30568AFC75CB__CTOR_OFFSET UNITYSDK_OFFSET(0x32A690)

inline static constexpr unsigned int Struct_2_B1FF30568AFC75CB_TypeDefinitionIndex = 41496;

struct alignas(8) Struct_2_B1FF30568AFC75CB
{
	::Class_1_DFEB9A1A221CB8BE* Field_2_0; // 0x10
	::UnityEngine::Transform* Field_2_1; // 0x18
	::MoleMole::Vehicle::VehicleTestCameraMono* Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x28

	::System::Void _ctor(::MoleMole::Vehicle::VehicleTestCameraMono*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleTestCameraMono*&))((::PBYTE)hIl2Cpp + STRUCT_2_B1FF30568AFC75CB__CTOR_OFFSET))(this, a1);
	}

	/*
	static ::PipelineCamera::WorldBasicCameraData Method_2_80E623F60C48CE30(::Struct_2_B1FF30568AFC75CB& a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::Struct_2_B1FF30568AFC75CB&))((::PBYTE)hIl2Cpp + STRUCT_2_B1FF30568AFC75CB_METHOD_2_80E623F60C48CE30_OFFSET))(a1);
	}
	*/
};
