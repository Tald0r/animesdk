#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATA_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B2DF430)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B2DF370)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B2DF480)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATA_GETGENERICFINDEX_OFFSET UNITYSDK_OFFSET(0x1B2DF510)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B2DF4F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATA_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B2DF500)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2DF5B0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGData_TypeDefinitionIndex = 36752;

	class CGData : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean disposed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Dispose(::System::Boolean disposing)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATA_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATA_DISPOSE_1_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATA_FINALIZE_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATA_GET_COUNT_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::FluffyUnderware::Curvy::Generator::CGData* a)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::CGData*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATA_OP_IMPLICIT_OFFSET))(a);
		}

		::System::Int32 getGenericFIndex(::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> FMapArray, ::System::Single fValue, ::System::Single& frag)
		{
			return ((::System::Int32(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single>, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATA_GETGENERICFINDEX_OFFSET))(this, FMapArray, fValue, frag);
		}
	};
}
