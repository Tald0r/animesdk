#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"
#include "unitysdk/System/Nullable_1.h"

#define CLASS_1_A28545FB4B14EB41_CLASS_2_339F55C48227DF11_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AE490F0)
#define CLASS_1_A28545FB4B14EB41_CLASS_2_339F55C48227DF11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AE49220)
#define CLASS_1_A28545FB4B14EB41_CLASS_2_339F55C48227DF11__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE48F50)

inline static constexpr unsigned int Class_1_A28545FB4B14EB41_Class_2_339F55C48227DF11_TypeDefinitionIndex = 9298;

class Class_1_A28545FB4B14EB41_Class_2_339F55C48227DF11 : public ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Single>>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_CLASS_2_339F55C48227DF11__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Nullable_1<::System::Single> a1, ::System::Nullable_1<::System::Single> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_CLASS_2_339F55C48227DF11_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::System::Nullable_1<::System::Single> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_CLASS_2_339F55C48227DF11_GETHASHCODE_OFFSET))(this, a1);
	}
};
