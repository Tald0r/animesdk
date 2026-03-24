#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C9EAEB75332026AC.h"
#include "unitysdk/Enum_3_34F6B4D6F6334A5A.h"

namespace MoleMole::Project::Config { class ControlPointData; }
namespace MoleMole::Project::Config { class CurvePointData; }
namespace MoleMole::Project::Config { class CurvySplineData; }
namespace MoleMole::Project::Config { class DetectionPointData; }
namespace MoleMole::Project::Config { class LevelData; }
namespace MoleMole::Project::Config { class NoDetectionZoneData; }
namespace MoleMole::Project::Config { class TargetPointData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_825EAE78AF505866_METHOD_3_3FE1A95DC05EDC68_OFFSET UNITYSDK_OFFSET(0x16E8D960)
#define CLASS_3_825EAE78AF505866_METHOD_3_4E45834556360335_OFFSET UNITYSDK_OFFSET(0x16E91D70)
#define CLASS_3_825EAE78AF505866_METHOD_3_555F1ECF3305CD1B_1_OFFSET UNITYSDK_OFFSET(0x16E90BF0)
#define CLASS_3_825EAE78AF505866_METHOD_3_555F1ECF3305CD1B_OFFSET UNITYSDK_OFFSET(0x16E8E590)
#define CLASS_3_825EAE78AF505866_METHOD_3_87209452B4E86410_1_OFFSET UNITYSDK_OFFSET(0x16E8E4B0)
#define CLASS_3_825EAE78AF505866_METHOD_3_87209452B4E86410_2_OFFSET UNITYSDK_OFFSET(0x16E8F2D0)
#define CLASS_3_825EAE78AF505866_METHOD_3_87209452B4E86410_3_OFFSET UNITYSDK_OFFSET(0x16E91B30)
#define CLASS_3_825EAE78AF505866_METHOD_3_87209452B4E86410_OFFSET UNITYSDK_OFFSET(0x16E8E3D0)
#define CLASS_3_825EAE78AF505866_METHOD_3_B12B136156DD1036_OFFSET UNITYSDK_OFFSET(0x16E91C10)
#define CLASS_3_825EAE78AF505866_METHOD_3_B2708EB81158566F_OFFSET UNITYSDK_OFFSET(0x16E8F3B0)
#define CLASS_3_825EAE78AF505866_METHOD_3_B2DE2E5527FD4D56_OFFSET UNITYSDK_OFFSET(0x16E91150)
#define CLASS_3_825EAE78AF505866_METHOD_3_B8863352E810C7B0_OFFSET UNITYSDK_OFFSET(0x16E92B50)
#define CLASS_3_825EAE78AF505866_METHOD_3_B8AEE4298B8CE38E_OFFSET UNITYSDK_OFFSET(0x16E8EAF0)
#define CLASS_3_825EAE78AF505866_METHOD_3_E34BE9C6E55F2B9A_1_OFFSET UNITYSDK_OFFSET(0x16E91E50)
#define CLASS_3_825EAE78AF505866_METHOD_3_E34BE9C6E55F2B9A_OFFSET UNITYSDK_OFFSET(0x16E924D0)
#define CLASS_3_825EAE78AF505866__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8D950)

inline static constexpr unsigned int Class_3_825EAE78AF505866_TypeDefinitionIndex = 17573;

class Class_3_825EAE78AF505866 : public ::Class_2_C9EAEB75332026AC
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>* Field_3_9; // 0x20
	::MoleMole::Project::Config::CurvySplineData* Field_3_14; // 0x28
	::MoleMole::Project::Config::DetectionPointData* Field_3_12; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::Project::Config::CurvePointData*>* Field_3_10; // 0x38
	::System::String* Field_3_4; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::Project::Config::TargetPointData*>* Field_3_11; // 0x48
	::MoleMole::Project::Config::CurvySplineData* Field_3_15; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>* Field_3_8; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::Project::Config::NoDetectionZoneData*>* Field_3_13; // 0x60
	::System::Int32 Field_3_7; // 0x68
	::Enum_3_34F6B4D6F6334A5A Field_3_6; // 0x6C
	::System::Int32 Field_3_3; // 0x70
	::System::Byte Field_3_0; // 0x74
	::System::Byte Field_3_1; // 0x75
	::System::Int32 Field_3_2; // 0x78
	::System::Int32 Field_3_5; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_825EAE78AF505866__CTOR_OFFSET))(this);
	}

	::MoleMole::Project::Config::DetectionPointData* Method_3_3FE1A95DC05EDC68()
	{
		return ((::MoleMole::Project::Config::DetectionPointData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_825EAE78AF505866_METHOD_3_3FE1A95DC05EDC68_OFFSET))(this);
	}

	::System::Int32 Method_3_87209452B4E86410()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_825EAE78AF505866_METHOD_3_87209452B4E86410_OFFSET))(this);
	}

	::System::Int32 Method_3_87209452B4E86410_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_825EAE78AF505866_METHOD_3_87209452B4E86410_1_OFFSET))(this);
	}

	::MoleMole::Project::Config::CurvySplineData* Method_3_555F1ECF3305CD1B()
	{
		return ((::MoleMole::Project::Config::CurvySplineData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_825EAE78AF505866_METHOD_3_555F1ECF3305CD1B_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Project::Config::TargetPointData*>* Method_3_B8AEE4298B8CE38E()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Project::Config::TargetPointData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_825EAE78AF505866_METHOD_3_B8AEE4298B8CE38E_OFFSET))(this);
	}

	::System::Int32 Method_3_87209452B4E86410_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_825EAE78AF505866_METHOD_3_87209452B4E86410_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Project::Config::NoDetectionZoneData*>* Method_3_B2708EB81158566F()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Project::Config::NoDetectionZoneData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_825EAE78AF505866_METHOD_3_B2708EB81158566F_OFFSET))(this);
	}

	::MoleMole::Project::Config::CurvySplineData* Method_3_555F1ECF3305CD1B_1()
	{
		return ((::MoleMole::Project::Config::CurvySplineData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_825EAE78AF505866_METHOD_3_555F1ECF3305CD1B_1_OFFSET))(this);
	}

	::MoleMole::Project::Config::LevelData* Method_3_B2DE2E5527FD4D56()
	{
		return ((::MoleMole::Project::Config::LevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_825EAE78AF505866_METHOD_3_B2DE2E5527FD4D56_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>* Method_3_E34BE9C6E55F2B9A()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_825EAE78AF505866_METHOD_3_E34BE9C6E55F2B9A_OFFSET))(this);
	}

	::System::String* Method_3_B12B136156DD1036()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_825EAE78AF505866_METHOD_3_B12B136156DD1036_OFFSET))(this);
	}

	::Enum_3_34F6B4D6F6334A5A Method_3_4E45834556360335()
	{
		return ((::Enum_3_34F6B4D6F6334A5A(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_825EAE78AF505866_METHOD_3_4E45834556360335_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>* Method_3_E34BE9C6E55F2B9A_1()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Project::Config::ControlPointData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_825EAE78AF505866_METHOD_3_E34BE9C6E55F2B9A_1_OFFSET))(this);
	}

	::System::Int32 Method_3_87209452B4E86410_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_825EAE78AF505866_METHOD_3_87209452B4E86410_3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Project::Config::CurvePointData*>* Method_3_B8863352E810C7B0()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Project::Config::CurvePointData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_825EAE78AF505866_METHOD_3_B8863352E810C7B0_OFFSET))(this);
	}
};
