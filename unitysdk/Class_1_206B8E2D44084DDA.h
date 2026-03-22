#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B7B61C15BD82C04;
class Class_3_C248956D95AFBB36_3;
class Class_3_C248956D95AFBB36_7;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_206B8E2D44084DDA_METHOD_1_2A23C0ABA0F501D0_OFFSET UNITYSDK_OFFSET(0x6A96390)
#define CLASS_1_206B8E2D44084DDA_METHOD_1_36A43EE474699637_OFFSET UNITYSDK_OFFSET(0x6A966C0)
#define CLASS_1_206B8E2D44084DDA_METHOD_1_918AB612278D9CC7_OFFSET UNITYSDK_OFFSET(0x6A965A0)
#define CLASS_1_206B8E2D44084DDA_METHOD_1_A0383CF01FE0250E_OFFSET UNITYSDK_OFFSET(0x6A95840)
#define CLASS_1_206B8E2D44084DDA_METHOD_1_A689DA67B8E3AA9B_OFFSET UNITYSDK_OFFSET(0x6A96240)
#define CLASS_1_206B8E2D44084DDA_METHOD_1_B0BF93601065B260_OFFSET UNITYSDK_OFFSET(0x6A96030)
#define CLASS_1_206B8E2D44084DDA_METHOD_1_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x6A95AE0)
#define CLASS_1_206B8E2D44084DDA__CTOR_OFFSET UNITYSDK_OFFSET(0x6A95790)

inline static constexpr unsigned int Class_1_206B8E2D44084DDA_TypeDefinitionIndex = 58971;

class Class_1_206B8E2D44084DDA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* Field_1_2; // 0x18
	::System::UInt32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_206B8E2D44084DDA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A0383CF01FE0250E(::System::Collections::Generic::List_1<::Class_1_3B7B61C15BD82C04*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_3B7B61C15BD82C04*>*))((::PBYTE)hIl2Cpp + CLASS_1_206B8E2D44084DDA_METHOD_1_A0383CF01FE0250E_OFFSET))(this, a1);
	}

	::System::Void Method_1_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_206B8E2D44084DDA_METHOD_1_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_1_B0BF93601065B260(::Class_3_C248956D95AFBB36_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C248956D95AFBB36_7*))((::PBYTE)hIl2Cpp + CLASS_1_206B8E2D44084DDA_METHOD_1_B0BF93601065B260_OFFSET))(this, a1);
	}

	::System::Void Method_1_A689DA67B8E3AA9B(::Class_3_C248956D95AFBB36_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C248956D95AFBB36_3*))((::PBYTE)hIl2Cpp + CLASS_1_206B8E2D44084DDA_METHOD_1_A689DA67B8E3AA9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_2A23C0ABA0F501D0(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_206B8E2D44084DDA_METHOD_1_2A23C0ABA0F501D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_918AB612278D9CC7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_206B8E2D44084DDA_METHOD_1_918AB612278D9CC7_OFFSET))(this, a1);
	}

	::System::Void Method_1_36A43EE474699637()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_206B8E2D44084DDA_METHOD_1_36A43EE474699637_OFFSET))(this);
	}
};
