#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5DFC66413CB20B09_Struct_2_F234142FB4C9E425.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/GameplayTag.h"

namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define CLASS_3_DDA114CE4B2474FF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x67408F0)
#define CLASS_3_DDA114CE4B2474FF_METHOD_3_1444D1AC849381D0_OFFSET UNITYSDK_OFFSET(0x67409E0)
#define CLASS_3_DDA114CE4B2474FF_METHOD_3_4C81F312BD1F80E6_OFFSET UNITYSDK_OFFSET(0x6740E70)
#define CLASS_3_DDA114CE4B2474FF_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x6740E10)
#define CLASS_3_DDA114CE4B2474FF_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x6740F70)
#define CLASS_3_DDA114CE4B2474FF_METHOD_3_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0x6740F00)
#define CLASS_3_DDA114CE4B2474FF_METHOD_3_FDE88B9DCD4387D7_OFFSET UNITYSDK_OFFSET(0x6740D80)
#define CLASS_3_DDA114CE4B2474FF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x6740880)
#define CLASS_3_DDA114CE4B2474FF__CCTOR_OFFSET UNITYSDK_OFFSET(0x6740950)
#define CLASS_3_DDA114CE4B2474FF__CTOR_OFFSET UNITYSDK_OFFSET(0x67409D0)

inline static constexpr unsigned int Class_3_DDA114CE4B2474FF_TypeDefinitionIndex = 72099;

class Class_3_DDA114CE4B2474FF : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_1 = 0xA0; // 0x0
	::Class_2_5DFC66413CB20B09_Struct_2_F234142FB4C9E425 Field_3_0; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DDA114CE4B2474FF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDA114CE4B2474FF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDA114CE4B2474FF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDA114CE4B2474FF_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_1444D1AC849381D0(::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::MoleMole::GameplayTag>*))((::PBYTE)hIl2Cpp + CLASS_3_DDA114CE4B2474FF_METHOD_3_1444D1AC849381D0_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_FDE88B9DCD4387D7(::MoleMole::GameplayTag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_DDA114CE4B2474FF_METHOD_3_FDE88B9DCD4387D7_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDA114CE4B2474FF_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_4C81F312BD1F80E6(::MoleMole::GameplayTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_DDA114CE4B2474FF_METHOD_3_4C81F312BD1F80E6_OFFSET))(this, a1);
	}

	::System::Void Method_3_CCD88C0D86A5A786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDA114CE4B2474FF_METHOD_3_CCD88C0D86A5A786_OFFSET))(this);
	}

	static ::Class_3_DDA114CE4B2474FF* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_DDA114CE4B2474FF*(*)())((::PBYTE)hIl2Cpp + CLASS_3_DDA114CE4B2474FF_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
