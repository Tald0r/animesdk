#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_321489CFFF7B18E7.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_785FDC7D0DA58280;
namespace DG::Tweening { class Tweener; }
namespace System { class Action; }

#define CLASS_2_67C52AB5D28F1573_METHOD_2_2BF8DDE73AAB4E21_OFFSET UNITYSDK_OFFSET(0x18E2F810)
#define CLASS_2_67C52AB5D28F1573_METHOD_2_368DCF3F01313B8D_OFFSET UNITYSDK_OFFSET(0x18E2F3B0)
#define CLASS_2_67C52AB5D28F1573_METHOD_2_5C0725AB21B4D500_OFFSET UNITYSDK_OFFSET(0x18E2CDE0)
#define CLASS_2_67C52AB5D28F1573_METHOD_2_7BC5D77245D26520_OFFSET UNITYSDK_OFFSET(0x18E2EFF0)
#define CLASS_2_67C52AB5D28F1573_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x18E2EBD0)
#define CLASS_2_67C52AB5D28F1573_METHOD_2_B928CD31D135313A_OFFSET UNITYSDK_OFFSET(0x18E2F290)
#define CLASS_2_67C52AB5D28F1573_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18E2FBA0)
#define CLASS_2_67C52AB5D28F1573_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18E2EC20)
#define CLASS_2_67C52AB5D28F1573_METHOD_2_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x18E2EC70)
#define CLASS_2_67C52AB5D28F1573_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18E2FBF0)
#define CLASS_2_67C52AB5D28F1573__CTOR_OFFSET UNITYSDK_OFFSET(0x18E2EC60)

inline static constexpr unsigned int Class_2_67C52AB5D28F1573_TypeDefinitionIndex = 81473;

class Class_2_67C52AB5D28F1573 : public ::Class_1_321489CFFF7B18E7
{
public:
	::DG::Tweening::Tweener* Field_2_1; // 0x18
	::System::Single Field_2_3; // 0x20
	::System::Boolean Field_2_0; // 0x24
	::System::Boolean Field_2_2; // 0x25

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C52AB5D28F1573__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_785FDC7D0DA58280* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_785FDC7D0DA58280*))((::PBYTE)hIl2Cpp + CLASS_2_67C52AB5D28F1573_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C52AB5D28F1573_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C52AB5D28F1573_METHOD_2_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_2_B928CD31D135313A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67C52AB5D28F1573_METHOD_2_B928CD31D135313A_OFFSET))(this, a1);
	}

	::System::Void Method_2_368DCF3F01313B8D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_67C52AB5D28F1573_METHOD_2_368DCF3F01313B8D_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_5C0725AB21B4D500(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_67C52AB5D28F1573_METHOD_2_5C0725AB21B4D500_OFFSET))(a1, a2);
	}

	::System::Void Method_2_2BF8DDE73AAB4E21(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_67C52AB5D28F1573_METHOD_2_2BF8DDE73AAB4E21_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C52AB5D28F1573_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C52AB5D28F1573_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_7BC5D77245D26520(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_67C52AB5D28F1573_METHOD_2_7BC5D77245D26520_OFFSET))(this, a1);
	}
};
