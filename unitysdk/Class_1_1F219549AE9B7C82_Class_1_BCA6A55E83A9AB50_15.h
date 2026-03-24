#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52BC70FDA339CCD0;
class Class_2_208CC9941471731A_607;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1F219549AE9B7C82_CLASS_1_BCA6A55E83A9AB50_15_METHOD_1_58D0CBD885BBA17E_OFFSET UNITYSDK_OFFSET(0x63C85D0)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_BCA6A55E83A9AB50_15_METHOD_1_5D67B4C94A5C1EBD_OFFSET UNITYSDK_OFFSET(0x63C81D0)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_BCA6A55E83A9AB50_15__CTOR_OFFSET UNITYSDK_OFFSET(0x63C81C0)

inline static constexpr unsigned int Class_1_1F219549AE9B7C82_Class_1_BCA6A55E83A9AB50_15_TypeDefinitionIndex = 62850;

class Class_1_1F219549AE9B7C82_Class_1_BCA6A55E83A9AB50_15 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_BCA6A55E83A9AB50_15__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_52BC70FDA339CCD0*>* Method_1_5D67B4C94A5C1EBD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_52BC70FDA339CCD0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_BCA6A55E83A9AB50_15_METHOD_1_5D67B4C94A5C1EBD_OFFSET))(this);
	}

	::System::Boolean Method_1_58D0CBD885BBA17E(::Class_2_208CC9941471731A_607* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_607*))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_BCA6A55E83A9AB50_15_METHOD_1_58D0CBD885BBA17E_OFFSET))(this, a1);
	}
};
