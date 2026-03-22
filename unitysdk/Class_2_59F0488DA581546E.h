#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_59F0488DA581546E_METHOD_2_5E51EA6655F9D1D1_1_OFFSET UNITYSDK_OFFSET(0x7209A10)
#define CLASS_2_59F0488DA581546E_METHOD_2_5E51EA6655F9D1D1_OFFSET UNITYSDK_OFFSET(0x72098C0)
#define CLASS_2_59F0488DA581546E_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x72098A0)
#define CLASS_2_59F0488DA581546E_METHOD_2_B0B282F8DDEBC1A7_OFFSET UNITYSDK_OFFSET(0x72095B0)
#define CLASS_2_59F0488DA581546E__CTOR_OFFSET UNITYSDK_OFFSET(0x7209850)

inline static constexpr unsigned int Class_2_59F0488DA581546E_TypeDefinitionIndex = 59883;

class Class_2_59F0488DA581546E : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59F0488DA581546E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B0B282F8DDEBC1A7(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_59F0488DA581546E_METHOD_2_B0B282F8DDEBC1A7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59F0488DA581546E_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_2_5E51EA6655F9D1D1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59F0488DA581546E_METHOD_2_5E51EA6655F9D1D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5E51EA6655F9D1D1_1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59F0488DA581546E_METHOD_2_5E51EA6655F9D1D1_1_OFFSET))(this, a1, a2);
	}
};
