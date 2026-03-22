#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_CD54B66100AEF2DB;
namespace MoleMole::Config { class ConfigShootingGroundCamera; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_CD54B66100AEF2DB_CLASS_1_6BB4E2179287D98F_METHOD_1_1C536E9223C4CF4A_OFFSET UNITYSDK_OFFSET(0x6A34FC0)
#define CLASS_1_CD54B66100AEF2DB_CLASS_1_6BB4E2179287D98F_METHOD_1_64472CDD86BC7657_OFFSET UNITYSDK_OFFSET(0x6A34EF0)
#define CLASS_1_CD54B66100AEF2DB_CLASS_1_6BB4E2179287D98F_METHOD_1_6D10837EDE586D70_1_OFFSET UNITYSDK_OFFSET(0x6A350D0)
#define CLASS_1_CD54B66100AEF2DB_CLASS_1_6BB4E2179287D98F_METHOD_1_6D10837EDE586D70_OFFSET UNITYSDK_OFFSET(0x6A34E70)
#define CLASS_1_CD54B66100AEF2DB_CLASS_1_6BB4E2179287D98F__CTOR_OFFSET UNITYSDK_OFFSET(0x6A34E60)

inline static constexpr unsigned int Class_1_CD54B66100AEF2DB_Class_1_6BB4E2179287D98F_TypeDefinitionIndex = 52317;

class Class_1_CD54B66100AEF2DB_Class_1_6BB4E2179287D98F : public ::System::Object
{
public:
	::Class_1_CD54B66100AEF2DB* Field_1_0; // 0x10
	::MoleMole::Config::ConfigShootingGroundCamera* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_CLASS_1_6BB4E2179287D98F__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_6D10837EDE586D70(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_CLASS_1_6BB4E2179287D98F_METHOD_1_6D10837EDE586D70_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_64472CDD86BC7657()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_CLASS_1_6BB4E2179287D98F_METHOD_1_64472CDD86BC7657_OFFSET))(this);
	}

	::System::Void Method_1_1C536E9223C4CF4A(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_CLASS_1_6BB4E2179287D98F_METHOD_1_1C536E9223C4CF4A_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_6D10837EDE586D70_1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_CLASS_1_6BB4E2179287D98F_METHOD_1_6D10837EDE586D70_1_OFFSET))(this, a1);
	}
};
