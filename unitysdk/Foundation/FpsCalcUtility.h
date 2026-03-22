#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FpsRecord.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_FPSCALCUTILITY_BEGINRECORDFPS_OFFSET UNITYSDK_OFFSET(0x1940A0E0)
#define FOUNDATION_FPSCALCUTILITY_ENDRECORDFPS_OFFSET UNITYSDK_OFFSET(0x1940A190)
#define FOUNDATION_FPSCALCUTILITY_GETRECORDFPS_OFFSET UNITYSDK_OFFSET(0x1940A310)
#define FOUNDATION_FPSCALCUTILITY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1940A460)
#define FOUNDATION_FPSCALCUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1940A8C0)
#define FOUNDATION_FPSCALCUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1940A8B0)

namespace Foundation
{
	inline static constexpr unsigned int FpsCalcUtility_TypeDefinitionIndex = 8051;

	class FpsCalcUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Single>** StaticGet__lastIntervals()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x6CB0);
		}
		static ::System::Single* StaticGet__timeleft()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x35F0);
		}
		static ::System::Single* StaticGet_updateInterval()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x35F4);
		}
		static ::System::Boolean* StaticGet__isRecording()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x35F8);
		}
		static ::System::Int32* StaticGet__frames()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x35FC);
		}
		static ::System::Int32* StaticGet__jankCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x3600);
		}
		static ::System::Single* StaticGet__minFps()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x3604);
		}
		static ::System::Int32* StaticGet__recordCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x3608);
		}
		static ::System::Single* StaticGet_fps()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x360C);
		}
		static ::System::Single* StaticGet__maxFps()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x3610);
		}
		static ::System::Single* StaticGet__time()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x3614);
		}
		static ::System::Single* StaticGet__recordTotalFps()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FpsCalcUtility_TypeDefinitionIndex)->GetStaticField(0x3618);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FPSCALCUTILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FPSCALCUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void BeginRecordFps()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FPSCALCUTILITY_BEGINRECORDFPS_OFFSET))();
		}

		static ::Foundation::FpsRecord EndRecordFps()
		{
			return ((::Foundation::FpsRecord(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FPSCALCUTILITY_ENDRECORDFPS_OFFSET))();
		}

		static ::Foundation::FpsRecord GetRecordFps()
		{
			return ((::Foundation::FpsRecord(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FPSCALCUTILITY_GETRECORDFPS_OFFSET))();
		}

		static ::System::Void Update()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FPSCALCUTILITY_UPDATE_OFFSET))();
		}
	};
}
