#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_5_12295D592E32B8BA;
class Class_5_AF65C3A968E836D2;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_5_12295D592E32B8BA_CLASS_1_BAE1F5A84C3B91A2_METHOD_1_B489448799EA08C9_OFFSET UNITYSDK_OFFSET(0x6D793C0)
#define CLASS_5_12295D592E32B8BA_CLASS_1_BAE1F5A84C3B91A2_METHOD_1_D62B9256DD010494_OFFSET UNITYSDK_OFFSET(0x6D79390)
#define CLASS_5_12295D592E32B8BA_CLASS_1_BAE1F5A84C3B91A2__CTOR_OFFSET UNITYSDK_OFFSET(0x6D79380)

inline static constexpr unsigned int Class_5_12295D592E32B8BA_Class_1_BAE1F5A84C3B91A2_TypeDefinitionIndex = 69662;

class Class_5_12295D592E32B8BA_Class_1_BAE1F5A84C3B91A2 : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_3; // 0x10
	::Class_5_AF65C3A968E836D2* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_2; // 0x20
	::Class_5_12295D592E32B8BA* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_CLASS_1_BAE1F5A84C3B91A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D62B9256DD010494()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_CLASS_1_BAE1F5A84C3B91A2_METHOD_1_D62B9256DD010494_OFFSET))(this);
	}

	::System::Void Method_1_B489448799EA08C9(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_CLASS_1_BAE1F5A84C3B91A2_METHOD_1_B489448799EA08C9_OFFSET))(this, a1);
	}
};
