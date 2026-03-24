#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class TestRotationMatrix;
namespace System { class String; }

#define MIHOYO_TOOLKIT_CGTOOLKIT_TESTROTATIONMATRIXCOMPREFERENCE_GETRENDERCOMPREFERENCES_OFFSET UNITYSDK_OFFSET(0xD42E2C0)
#define MIHOYO_TOOLKIT_CGTOOLKIT_TESTROTATIONMATRIXCOMPREFERENCE_SETCOMPREFERENCE_OFFSET UNITYSDK_OFFSET(0xD42E4F0)
#define MIHOYO_TOOLKIT_CGTOOLKIT_TESTROTATIONMATRIXCOMPREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0xD42E2B0)

namespace MiHoYo::ToolKit::CGToolKit
{
	inline static constexpr unsigned int TestRotationMatrixCompReference_TypeDefinitionIndex = 70094;

	class TestRotationMatrixCompReference : public ::System::Object
	{
	public:
		::TestRotationMatrix* Key; // 0x10
		::System::String* characterGO; // 0x18
		::System::String* planeGO; // 0x20

		::System::Void _ctor(::TestRotationMatrix* comp)
		{
			return ((::System::Void(*)(::PVOID, ::TestRotationMatrix*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_TESTROTATIONMATRIXCOMPREFERENCE__CTOR_OFFSET))(this, comp);
		}

		::System::Void GetRenderCompReferences(::TestRotationMatrix* comp)
		{
			return ((::System::Void(*)(::PVOID, ::TestRotationMatrix*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_TESTROTATIONMATRIXCOMPREFERENCE_GETRENDERCOMPREFERENCES_OFFSET))(this, comp);
		}

		::System::Void SetCompReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_TESTROTATIONMATRIXCOMPREFERENCE_SETCOMPREFERENCE_OFFSET))(this);
		}
	};
}
