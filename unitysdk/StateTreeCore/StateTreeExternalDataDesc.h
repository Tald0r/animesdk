#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataRequirement.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define STATETREECORE_STATETREEEXTERNALDATADESC_EQUALS_OFFSET UNITYSDK_OFFSET(0x8EBFE0)
#define STATETREECORE_STATETREEEXTERNALDATADESC_ISCOMPATIBLEWITH_OFFSET UNITYSDK_OFFSET(0x8EBF50)
#define STATETREECORE_STATETREEEXTERNALDATADESC_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19BE8E60)
#define STATETREECORE_STATETREEEXTERNALDATADESC_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19BE8ED0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeExternalDataDesc_TypeDefinitionIndex = 26945;

	struct alignas(4) StateTreeExternalDataDesc
	{
		::UnrealTypes::FStructHandle Struct; // 0x10
		::Foundation::Unreal::FName Name; // 0x14
		::StateTreeCore::StateTreeExternalDataHandle Handle; // 0x1C
		::StateTreeCore::StateTreeExternalDataRequirement Requirement; // 0x24

		/*
		::System::Boolean IsCompatibleWith(::StateTreeCore::StateTreeDataView dataView)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_ISCOMPATIBLEWITH_OFFSET))(this, dataView);
		}
		*/

		::System::Boolean Equals(::StateTreeCore::StateTreeExternalDataDesc other)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeExternalDataDesc))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_EQUALS_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::StateTreeCore::StateTreeExternalDataDesc lhs, ::StateTreeCore::StateTreeExternalDataDesc rhs)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreeExternalDataDesc, ::StateTreeCore::StateTreeExternalDataDesc))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::StateTreeCore::StateTreeExternalDataDesc lhs, ::StateTreeCore::StateTreeExternalDataDesc rhs)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreeExternalDataDesc, ::StateTreeCore::StateTreeExternalDataDesc))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}
	};
}
