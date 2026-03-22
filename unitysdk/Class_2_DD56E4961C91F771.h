#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/Class_1_8F9C8201CB57E0BD_Enum_3_7C9BB6787F559CBC.h"
#include "unitysdk/Class_1_B4BE03363BD6F2CF.h"
#include "unitysdk/Class_2_DD56E4961C91F771_Struct_2_BBD456EBC9087BC2_9.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/NapPlatform.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_168;
class Class_0_16E4307DCC419505_240;
class Class_1_019870FE224FBE5A;
class Class_1_1747DAB17F36B4DF;
class Class_1_394D6A10B246CA86;
class Class_1_5147F89B36002D2A;
class Class_1_C9DFE5EE7107C629_1;
class Class_2_DD56E4961C91F771_Class_1_5A741906034C4C8D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::IO { class StreamWriter; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_DD56E4961C91F771_METHOD_2_038B83414C3F3EC2_OFFSET UNITYSDK_OFFSET(0xAC75000)
#define CLASS_2_DD56E4961C91F771_METHOD_2_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0xAC6E520)
#define CLASS_2_DD56E4961C91F771_METHOD_2_0501C9F947F2E0F1_OFFSET UNITYSDK_OFFSET(0xAC756F0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_07AA83773EE0208F_OFFSET UNITYSDK_OFFSET(0xAC73DF0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xAC69910)
#define CLASS_2_DD56E4961C91F771_METHOD_2_09A4081B9347750C_OFFSET UNITYSDK_OFFSET(0xAC71B90)
#define CLASS_2_DD56E4961C91F771_METHOD_2_0AD1FA6D95A0C618_OFFSET UNITYSDK_OFFSET(0xAC68CA0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_0C74E6929D088391_OFFSET UNITYSDK_OFFSET(0xAC708A0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_1028CDCB16F1F435_OFFSET UNITYSDK_OFFSET(0xAC72450)
#define CLASS_2_DD56E4961C91F771_METHOD_2_110AE06E63E34BE4_OFFSET UNITYSDK_OFFSET(0xAC71660)
#define CLASS_2_DD56E4961C91F771_METHOD_2_141214625527D3EF_OFFSET UNITYSDK_OFFSET(0xAC74E10)
#define CLASS_2_DD56E4961C91F771_METHOD_2_141CAB404154CFEB_OFFSET UNITYSDK_OFFSET(0xAC73A40)
#define CLASS_2_DD56E4961C91F771_METHOD_2_145DB446463691CF_OFFSET UNITYSDK_OFFSET(0xAC70490)
#define CLASS_2_DD56E4961C91F771_METHOD_2_175A1B2BBEAB0D11_OFFSET UNITYSDK_OFFSET(0xAC670E0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_17EB12105ECAEBAE_OFFSET UNITYSDK_OFFSET(0xAC716D0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_22B9A093243930D9_OFFSET UNITYSDK_OFFSET(0xAC72FC0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xAC751E0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_2C1FF7715E86F87A_OFFSET UNITYSDK_OFFSET(0xAC6F4E0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_2DD7377814EAD872_OFFSET UNITYSDK_OFFSET(0xAC70010)
#define CLASS_2_DD56E4961C91F771_METHOD_2_2F41E02FB44186AB_OFFSET UNITYSDK_OFFSET(0xAC6BED0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_2FC1E9857D3C6338_OFFSET UNITYSDK_OFFSET(0xAC742F0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_327C237EFA0918F7_OFFSET UNITYSDK_OFFSET(0xAC6A1A0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_328CCC4233C29337_OFFSET UNITYSDK_OFFSET(0xAC72DA0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_330089F24ECD77D5_OFFSET UNITYSDK_OFFSET(0xAC6CDD0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_378F7CE035FD5B6D_OFFSET UNITYSDK_OFFSET(0xAC70870)
#define CLASS_2_DD56E4961C91F771_METHOD_2_3990729D02BC3E64_OFFSET UNITYSDK_OFFSET(0xAC75260)
#define CLASS_2_DD56E4961C91F771_METHOD_2_3AD8EF7B6DB8DC00_OFFSET UNITYSDK_OFFSET(0xAC6D7F0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_3CD480F55E1BBB7A_OFFSET UNITYSDK_OFFSET(0xAC6EA60)
#define CLASS_2_DD56E4961C91F771_METHOD_2_3F1898086999854E_OFFSET UNITYSDK_OFFSET(0xAC70FA0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_3F32E6E2C28397F1_OFFSET UNITYSDK_OFFSET(0xAC73B40)
#define CLASS_2_DD56E4961C91F771_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xAC6E8B0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_4A5BF8F254CA4369_OFFSET UNITYSDK_OFFSET(0xAC748A0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_4AB2B25263ADAC0F_OFFSET UNITYSDK_OFFSET(0xAC72C60)
#define CLASS_2_DD56E4961C91F771_METHOD_2_4B6C8CE001EAFB95_OFFSET UNITYSDK_OFFSET(0xAC69270)
#define CLASS_2_DD56E4961C91F771_METHOD_2_4E184894D97CD690_OFFSET UNITYSDK_OFFSET(0xAC703F0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_568E2DFCDC397B64_OFFSET UNITYSDK_OFFSET(0xAC66860)
#define CLASS_2_DD56E4961C91F771_METHOD_2_57854F5812AC412F_OFFSET UNITYSDK_OFFSET(0xAC6BCE0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_5A6174ED44C1F417_OFFSET UNITYSDK_OFFSET(0xAC73E80)
#define CLASS_2_DD56E4961C91F771_METHOD_2_5E75186D4B22B5CF_OFFSET UNITYSDK_OFFSET(0xAC700F0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_5E93572F9B9C3F30_OFFSET UNITYSDK_OFFSET(0xAC6FB30)
#define CLASS_2_DD56E4961C91F771_METHOD_2_5FF1E2B8FCD9B46C_OFFSET UNITYSDK_OFFSET(0xAC702E0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_61C7E962D45CAA0D_OFFSET UNITYSDK_OFFSET(0xAC70580)
#define CLASS_2_DD56E4961C91F771_METHOD_2_6237B36DCEBCB7F6_OFFSET UNITYSDK_OFFSET(0xAC71F00)
#define CLASS_2_DD56E4961C91F771_METHOD_2_6262ECCD49E303C4_OFFSET UNITYSDK_OFFSET(0xAC6E590)
#define CLASS_2_DD56E4961C91F771_METHOD_2_663546559182E6FB_OFFSET UNITYSDK_OFFSET(0xAC74D60)
#define CLASS_2_DD56E4961C91F771_METHOD_2_67F66B9AF03966F2_OFFSET UNITYSDK_OFFSET(0xAC6C2D0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_6864BF0C477F1F62_OFFSET UNITYSDK_OFFSET(0xAC67DD0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_6F3ED48AF05D074C_OFFSET UNITYSDK_OFFSET(0xAC6DCA0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_718CC98CADA900CC_OFFSET UNITYSDK_OFFSET(0xAC72530)
#define CLASS_2_DD56E4961C91F771_METHOD_2_735D1DE492D8A099_OFFSET UNITYSDK_OFFSET(0xAC6F6B0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_75DDB26088449959_OFFSET UNITYSDK_OFFSET(0xAC75590)
#define CLASS_2_DD56E4961C91F771_METHOD_2_7676FDB6E6C86FAA_OFFSET UNITYSDK_OFFSET(0xAC70000)
#define CLASS_2_DD56E4961C91F771_METHOD_2_79B90490025ABC83_OFFSET UNITYSDK_OFFSET(0xAC66750)
#define CLASS_2_DD56E4961C91F771_METHOD_2_79FE15B85D839AD6_OFFSET UNITYSDK_OFFSET(0xAC73D70)
#define CLASS_2_DD56E4961C91F771_METHOD_2_80B69985EE8DA519_OFFSET UNITYSDK_OFFSET(0xAC6DD40)
#define CLASS_2_DD56E4961C91F771_METHOD_2_86D9A88811BF5A61_OFFSET UNITYSDK_OFFSET(0xAC6D600)
#define CLASS_2_DD56E4961C91F771_METHOD_2_8742CF0BC925DDFA_OFFSET UNITYSDK_OFFSET(0xAC6EE00)
#define CLASS_2_DD56E4961C91F771_METHOD_2_8746A2642AD7DC61_OFFSET UNITYSDK_OFFSET(0xAC6CA20)
#define CLASS_2_DD56E4961C91F771_METHOD_2_89CF89B6FCDA0FD8_OFFSET UNITYSDK_OFFSET(0xAC745B0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_8BA5587F670061D6_OFFSET UNITYSDK_OFFSET(0xAC6BBE0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0xAC6D2E0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_9C9DE4C164487634_OFFSET UNITYSDK_OFFSET(0xAC738B0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xAC67B70)
#define CLASS_2_DD56E4961C91F771_METHOD_2_9F8F85BA5EA1113D_OFFSET UNITYSDK_OFFSET(0xAC72FB0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_9FBDE14B0898A596_OFFSET UNITYSDK_OFFSET(0xAC74270)
#define CLASS_2_DD56E4961C91F771_METHOD_2_A48E77D7774BE3AE_OFFSET UNITYSDK_OFFSET(0xAC6DA40)
#define CLASS_2_DD56E4961C91F771_METHOD_2_AEF24C7CFDD55A95_OFFSET UNITYSDK_OFFSET(0xAC73430)
#define CLASS_2_DD56E4961C91F771_METHOD_2_B09D70CFB8466A6F_OFFSET UNITYSDK_OFFSET(0xAC731E0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_B4FD20705670097F_OFFSET UNITYSDK_OFFSET(0xAC75670)
#define CLASS_2_DD56E4961C91F771_METHOD_2_B7D8BB6BDD800DBF_OFFSET UNITYSDK_OFFSET(0xAC74FF0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_B985F063D7926E78_OFFSET UNITYSDK_OFFSET(0xAC6C8E0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_BA465BE31857AF60_OFFSET UNITYSDK_OFFSET(0xAC739B0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_BCC281DC419BB5B6_OFFSET UNITYSDK_OFFSET(0xAC71D10)
#define CLASS_2_DD56E4961C91F771_METHOD_2_C14402D387B222A7_OFFSET UNITYSDK_OFFSET(0xAC717C0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_C346417CED109BF8_OFFSET UNITYSDK_OFFSET(0xAC6EE10)
#define CLASS_2_DD56E4961C91F771_METHOD_2_C416F89188C0C026_OFFSET UNITYSDK_OFFSET(0xAC6D050)
#define CLASS_2_DD56E4961C91F771_METHOD_2_C553BAF25E541FB4_OFFSET UNITYSDK_OFFSET(0xAC694B0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_C6F738ECB1BBB902_OFFSET UNITYSDK_OFFSET(0xAC69020)
#define CLASS_2_DD56E4961C91F771_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0xAC71A30)
#define CLASS_2_DD56E4961C91F771_METHOD_2_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0xAC75660)
#define CLASS_2_DD56E4961C91F771_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xAC6BBD0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xAC6F340)
#define CLASS_2_DD56E4961C91F771_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xAC6FFA0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xAC70810)
#define CLASS_2_DD56E4961C91F771_METHOD_2_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0xAC720E0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0xAC73D10)
#define CLASS_2_DD56E4961C91F771_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC6CCB0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_CAEE66B1498088FA_OFFSET UNITYSDK_OFFSET(0xAC723E0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_CEFEFE0F3C802E23_OFFSET UNITYSDK_OFFSET(0xAC72140)
#define CLASS_2_DD56E4961C91F771_METHOD_2_D02A2F5F45D7393D_OFFSET UNITYSDK_OFFSET(0xAC733A0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_D07CC0F9C3815E0E_OFFSET UNITYSDK_OFFSET(0xAC67030)
#define CLASS_2_DD56E4961C91F771_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0xAC6A0F0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_D0ECA6D90E154547_OFFSET UNITYSDK_OFFSET(0xAC71DA0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_D3D0E7AE5187A46F_1_OFFSET UNITYSDK_OFFSET(0xAC75100)
#define CLASS_2_DD56E4961C91F771_METHOD_2_D3D0E7AE5187A46F_OFFSET UNITYSDK_OFFSET(0xAC66F70)
#define CLASS_2_DD56E4961C91F771_METHOD_2_D40A9D8AEF1EFFBA_OFFSET UNITYSDK_OFFSET(0xAC74930)
#define CLASS_2_DD56E4961C91F771_METHOD_2_D5C710EE46289594_OFFSET UNITYSDK_OFFSET(0xAC6F840)
#define CLASS_2_DD56E4961C91F771_METHOD_2_D62F0C42D44140DA_OFFSET UNITYSDK_OFFSET(0xAC6F020)
#define CLASS_2_DD56E4961C91F771_METHOD_2_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0xAC69D50)
#define CLASS_2_DD56E4961C91F771_METHOD_2_D8946B1B693849AF_OFFSET UNITYSDK_OFFSET(0xAC741D0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_D8B5AF94C83AB2A8_OFFSET UNITYSDK_OFFSET(0xAC6DAE0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_DAC3FA2224E3AB52_1_OFFSET UNITYSDK_OFFSET(0xAC6E9E0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_DAC3FA2224E3AB52_OFFSET UNITYSDK_OFFSET(0xAC6D770)
#define CLASS_2_DD56E4961C91F771_METHOD_2_DDBD138CE0CEE173_OFFSET UNITYSDK_OFFSET(0xAC71A40)
#define CLASS_2_DD56E4961C91F771_METHOD_2_E04139E205E75ABC_OFFSET UNITYSDK_OFFSET(0xAC74AB0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_E32F13808F7B1220_OFFSET UNITYSDK_OFFSET(0xAC67980)
#define CLASS_2_DD56E4961C91F771_METHOD_2_E777C87FA5467D4C_1_OFFSET UNITYSDK_OFFSET(0xAC6D6E0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_E777C87FA5467D4C_OFFSET UNITYSDK_OFFSET(0xAC72D10)
#define CLASS_2_DD56E4961C91F771_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xAC724C0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0xAC699C0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_ECDDE80AF82CD905_OFFSET UNITYSDK_OFFSET(0xAC6BA70)
#define CLASS_2_DD56E4961C91F771_METHOD_2_ECEAF41CC43C8C3D_OFFSET UNITYSDK_OFFSET(0xAC6C700)
#define CLASS_2_DD56E4961C91F771_METHOD_2_EE6F1388FB8342C5_OFFSET UNITYSDK_OFFSET(0xAC6CD10)
#define CLASS_2_DD56E4961C91F771_METHOD_2_F19A3184A600902A_OFFSET UNITYSDK_OFFSET(0xAC722D0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_F22E2CB0A9332AC5_OFFSET UNITYSDK_OFFSET(0xAC729A0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_F32C2A25602CC870_OFFSET UNITYSDK_OFFSET(0xAC6C0A0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_F5ECFD7FEA1A5F5C_OFFSET UNITYSDK_OFFSET(0xAC68AC0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_F788DFB7802ADCC9_OFFSET UNITYSDK_OFFSET(0xAC75430)
#define CLASS_2_DD56E4961C91F771_METHOD_2_F90CB4058E641F0D_OFFSET UNITYSDK_OFFSET(0xAC70A60)
#define CLASS_2_DD56E4961C91F771_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xAC677B0)
#define CLASS_2_DD56E4961C91F771_METHOD_2_FB0FF2E2CC82CC6B_OFFSET UNITYSDK_OFFSET(0xAC75250)
#define CLASS_2_DD56E4961C91F771_METHOD_2_FFE2775EE1D35567_OFFSET UNITYSDK_OFFSET(0xAC6F3A0)
#define CLASS_2_DD56E4961C91F771__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC6B9F0)
#define CLASS_2_DD56E4961C91F771__CTOR_OFFSET UNITYSDK_OFFSET(0xAC65BD0)

inline static constexpr unsigned int Class_2_DD56E4961C91F771_TypeDefinitionIndex = 68580;

class Class_2_DD56E4961C91F771 : public ::Class_1_B4BE03363BD6F2CF
{
public:
	static ::System::UInt32* StaticGet_Field_2_5()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_DD56E4961C91F771_TypeDefinitionIndex)->GetStaticField(0x115F0);
	}
	static ::System::UInt32* StaticGet_Field_2_48()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_DD56E4961C91F771_TypeDefinitionIndex)->GetStaticField(0x115F4);
	}
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::Int32 Field_2_40 = 0x80; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_16; // 0x18
	::System::Collections::Generic::List_1<::Class_2_DD56E4961C91F771_Class_1_5A741906034C4C8D*>* Field_2_43; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>* Field_2_12; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* Field_2_14; // 0x30
	::Class_1_1747DAB17F36B4DF* Field_2_8; // 0x38
	::System::Collections::Generic::Queue_1<::System::Int32>* Field_2_22; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_10; // 0x48
	::UnityEngine::GameObject* Field_2_9; // 0x50
	::System::String* Field_2_17; // 0x58
	::UnityEngine::GameObject* Field_2_7; // 0x60
	::System::Collections::Generic::Queue_1<::System::Int32>* Field_2_21; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_46; // 0x70
	::System::Collections::Generic::List_1<::Class_2_DD56E4961C91F771_Struct_2_BBD456EBC9087BC2_9>* Field_2_19; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_42; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_5147F89B36002D2A*>* Field_2_11; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::Coroutine::CoroutineHandle>* Field_2_45; // 0x90
	::System::Collections::Generic::Queue_1<::System::Int32>* Field_2_44; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_41; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_1747DAB17F36B4DF*>* Field_2_20; // 0xA8
	::System::Collections::Generic::Queue_1<::System::Int32>* Field_2_23; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* Field_2_13; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_394D6A10B246CA86*>* Field_2_47; // 0xC0
	::System::Int32 Field_2_34; // 0xC8
	::System::Single Field_2_39; // 0xCC
	::System::UInt32 Field_2_15; // 0xD0
	::System::Int32 Field_2_32; // 0xD4
	::System::Int32 Field_2_33; // 0xD8
	::System::Single Field_2_6; // 0xDC
	::System::Int32 Field_2_26; // 0xE0
	::System::Int32 Field_2_29; // 0xE4
	::System::Int32 Field_2_36; // 0xE8
	::System::Int32 Field_2_31; // 0xEC
	::System::Int32 Field_2_24; // 0xF0
	::System::Int32 Field_2_25; // 0xF4
	::System::Int32 Field_2_35; // 0xF8
	::System::Single Field_2_38; // 0xFC
	::System::Int32 Field_2_27; // 0x100
	::System::Int32 Field_2_28; // 0x104
	::System::Int32 Field_2_30; // 0x108
	::System::Int32 Field_2_18; // 0x10C
	::System::Int32 Field_2_37; // 0x110

	::System::Void _ctor(::Class_1_C9DFE5EE7107C629_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_1*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771__CCTOR_OFFSET))();
	}

	::System::Void Method_2_568E2DFCDC397B64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_568E2DFCDC397B64_OFFSET))(this);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_2_6864BF0C477F1F62(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_6864BF0C477F1F62_OFFSET))(this, a1);
	}

	::System::Void Method_2_097468641FDED14E(::Class_1_019870FE224FBE5A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_019870FE224FBE5A*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_2_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Void Method_2_D737CD2779D51A4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_D737CD2779D51A4E_OFFSET))(this);
	}

	::System::Void Method_2_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_2_327C237EFA0918F7(::System::IO::StreamWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_327C237EFA0918F7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_ECDDE80AF82CD905(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_ECDDE80AF82CD905_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_8BA5587F670061D6(::System::String* a1, ::Foundation::Coroutine::CoroutineHandle& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::Coroutine::CoroutineHandle&))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_8BA5587F670061D6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_57854F5812AC412F(::UnityEngine::GameObject* a1, ::System::String* a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_57854F5812AC412F_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_2_F32C2A25602CC870(::System::UInt32 a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_F32C2A25602CC870_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B985F063D7926E78(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_B985F063D7926E78_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_EE6F1388FB8342C5(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_EE6F1388FB8342C5_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_2_D3D0E7AE5187A46F(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_D3D0E7AE5187A46F_OFFSET))(this, a1);
	}

	::System::Void Method_2_330089F24ECD77D5(::UnityEngine::GameObject* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_330089F24ECD77D5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_2_86D9A88811BF5A61(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_86D9A88811BF5A61_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAC3FA2224E3AB52(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_DAC3FA2224E3AB52_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_A48E77D7774BE3AE(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_A48E77D7774BE3AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6F3ED48AF05D074C(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_6F3ED48AF05D074C_OFFSET))(this, a1);
	}

	::System::Void Method_2_80B69985EE8DA519(::System::UInt32 a1, ::System::Single a2, ::UnityEngine::GameObject* a3, ::System::Int32 a4, ::AkCurveInterpolation a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::UnityEngine::GameObject*, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_80B69985EE8DA519_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_C553BAF25E541FB4(::Class_1_1747DAB17F36B4DF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_C553BAF25E541FB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_6262ECCD49E303C4(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_6262ECCD49E303C4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_DAC3FA2224E3AB52_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_DAC3FA2224E3AB52_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_3CD480F55E1BBB7A(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_3CD480F55E1BBB7A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C6F738ECB1BBB902(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_C6F738ECB1BBB902_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>* Method_2_8742CF0BC925DDFA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_8742CF0BC925DDFA_OFFSET))(this);
	}

	::System::Boolean Method_2_C346417CED109BF8(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_C346417CED109BF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D62F0C42D44140DA(::System::String* a1, ::System::Single& a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single&, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_D62F0C42D44140DA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_3AD8EF7B6DB8DC00(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_3AD8EF7B6DB8DC00_OFFSET))(this, a1, a2);
	}

	::Foundation::Coroutine::CoroutineHandle Method_2_FFE2775EE1D35567(::System::String* a1)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_FFE2775EE1D35567_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C1FF7715E86F87A(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_2C1FF7715E86F87A_OFFSET))(this, a1);
	}

	::System::Void Method_2_735D1DE492D8A099(::System::String* a1, ::System::Single a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_735D1DE492D8A099_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_D5C710EE46289594(::System::UInt32 a1, ::System::Single& a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Single&, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_D5C710EE46289594_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5E93572F9B9C3F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_5E93572F9B9C3F30_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* Method_2_7676FDB6E6C86FAA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_7676FDB6E6C86FAA_OFFSET))(this);
	}

	::System::Void Method_2_8746A2642AD7DC61(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_8746A2642AD7DC61_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DD7377814EAD872(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_2DD7377814EAD872_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_5E75186D4B22B5CF(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::String* a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_5E75186D4B22B5CF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_5FF1E2B8FCD9B46C(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_5FF1E2B8FCD9B46C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4B6C8CE001EAFB95(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_4B6C8CE001EAFB95_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_145DB446463691CF(::System::String* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_145DB446463691CF_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Boolean Method_2_378F7CE035FD5B6D(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_378F7CE035FD5B6D_OFFSET))(this, a1);
	}

	::System::String* Method_2_0C74E6929D088391(::System::UInt64 a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_0C74E6929D088391_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F90CB4058E641F0D(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_F90CB4058E641F0D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_110AE06E63E34BE4(::UnityEngine::GameObject* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_110AE06E63E34BE4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_17EB12105ECAEBAE(::System::String* a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_17EB12105ECAEBAE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C14402D387B222A7(::Class_1_8F9C8201CB57E0BD_Enum_3_7C9BB6787F559CBC a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F9C8201CB57E0BD_Enum_3_7C9BB6787F559CBC, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_C14402D387B222A7_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_DDBD138CE0CEE173(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_DDBD138CE0CEE173_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_BCC281DC419BB5B6(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_BCC281DC419BB5B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_E32F13808F7B1220(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_E32F13808F7B1220_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_CA373AA1C7054598_4_OFFSET))(this);
	}

	::Class_1_394D6A10B246CA86* Method_2_CEFEFE0F3C802E23(::System::String* a1)
	{
		return ((::Class_1_394D6A10B246CA86*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_CEFEFE0F3C802E23_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_D07CC0F9C3815E0E(::UnityEngine::Vector3 a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_D07CC0F9C3815E0E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F19A3184A600902A(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_F19A3184A600902A_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_09A4081B9347750C(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::String* a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_09A4081B9347750C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CAEE66B1498088FA(::System::IO::StreamWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_CAEE66B1498088FA_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_1028CDCB16F1F435()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_1028CDCB16F1F435_OFFSET))(this);
	}

	::System::Int32 Method_2_79B90490025ABC83(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_79B90490025ABC83_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_61C7E962D45CAA0D(::System::String* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_61C7E962D45CAA0D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_019870FE224FBE5A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_019870FE224FBE5A*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_718CC98CADA900CC(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_718CC98CADA900CC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D0ECA6D90E154547(::System::String* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_D0ECA6D90E154547_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F22E2CB0A9332AC5(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_F22E2CB0A9332AC5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4AB2B25263ADAC0F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_4AB2B25263ADAC0F_OFFSET))(this, a1);
	}

	::System::Void Method_2_E777C87FA5467D4C(::System::String* a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_E777C87FA5467D4C_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_F5ECFD7FEA1A5F5C(::UnityEngine::GameObject* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_F5ECFD7FEA1A5F5C_OFFSET))(this, a1);
	}

	::System::Void Method_2_328CCC4233C29337(::System::String* a1, ::System::String* a2, ::System::UInt32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_328CCC4233C29337_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_2_9F8F85BA5EA1113D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_9F8F85BA5EA1113D_OFFSET))(this);
	}

	::System::Void Method_2_22B9A093243930D9(::Class_1_8F9C8201CB57E0BD_Enum_3_7C9BB6787F559CBC a1, ::System::Boolean a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F9C8201CB57E0BD_Enum_3_7C9BB6787F559CBC, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_22B9A093243930D9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_B09D70CFB8466A6F(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_B09D70CFB8466A6F_OFFSET))(this, a1);
	}

	::System::Void Method_2_C416F89188C0C026(::System::UInt64 a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_C416F89188C0C026_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_D02A2F5F45D7393D(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_D02A2F5F45D7393D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_AEF24C7CFDD55A95(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_AEF24C7CFDD55A95_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_BA465BE31857AF60(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_BA465BE31857AF60_OFFSET))(this, a1);
	}

	::System::Void Method_2_4E184894D97CD690(::System::String* a1, ::System::Single a2, ::System::Int32 a3, ::AkCurveInterpolation a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_4E184894D97CD690_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_2_3F32E6E2C28397F1(::UnityEngine::GameObject* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_3F32E6E2C28397F1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_CA373AA1C7054598_5_OFFSET))(this);
	}

	::System::Void Method_2_79FE15B85D839AD6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_79FE15B85D839AD6_OFFSET))(this, a1);
	}

	::System::String* Method_2_07AA83773EE0208F(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_07AA83773EE0208F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E777C87FA5467D4C_1(::System::String* a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_E777C87FA5467D4C_1_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_2_D8946B1B693849AF(::Class_0_16E4307DCC419505_240* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_0_16E4307DCC419505_240*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_D8946B1B693849AF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9FBDE14B0898A596(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_9FBDE14B0898A596_OFFSET))(this, a1);
	}

	::System::Void Method_2_141CAB404154CFEB(::System::String* a1, ::System::Single a2, ::UnityEngine::GameObject* a3, ::System::Int32 a4, ::AkCurveInterpolation a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::GameObject*, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_141CAB404154CFEB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_04DE4FBB293DFBD6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}

	::System::Single Method_2_89CF89B6FCDA0FD8(::System::UInt32 a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_89CF89B6FCDA0FD8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4A5BF8F254CA4369(::System::String*& a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_4A5BF8F254CA4369_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E04139E205E75ABC(::Foundation::NapPlatform a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NapPlatform))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_E04139E205E75ABC_OFFSET))(this, a1);
	}

	::System::Void Method_2_2FC1E9857D3C6338(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_2FC1E9857D3C6338_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_9C9DE4C164487634()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_9C9DE4C164487634_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_663546559182E6FB(::UnityEngine::Transform* a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_663546559182E6FB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3F1898086999854E(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_3F1898086999854E_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_5147F89B36002D2A*>* Method_2_B7D8BB6BDD800DBF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_5147F89B36002D2A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_B7D8BB6BDD800DBF_OFFSET))(this);
	}

	::System::Boolean Method_2_038B83414C3F3EC2(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_038B83414C3F3EC2_OFFSET))(this, a1, a2);
	}

	::Class_1_1747DAB17F36B4DF* Method_2_67F66B9AF03966F2(::System::String* a1)
	{
		return ((::Class_1_1747DAB17F36B4DF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_67F66B9AF03966F2_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_D3D0E7AE5187A46F_1(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_D3D0E7AE5187A46F_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_141214625527D3EF(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::String* a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_141214625527D3EF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_6237B36DCEBCB7F6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_6237B36DCEBCB7F6_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_FB0FF2E2CC82CC6B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_FB0FF2E2CC82CC6B_OFFSET))(this);
	}

	::System::Boolean Method_2_2F41E02FB44186AB(::System::UInt64 a1, ::System::String* a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_2F41E02FB44186AB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_175A1B2BBEAB0D11(::System::String* a1, ::System::String* a2, ::Class_0_16E4307DCC419505_168* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Class_0_16E4307DCC419505_168*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_175A1B2BBEAB0D11_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::GameObject* Method_2_D8B5AF94C83AB2A8(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::System::String* a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_D8B5AF94C83AB2A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_ECEAF41CC43C8C3D(::Class_1_1747DAB17F36B4DF* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_ECEAF41CC43C8C3D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3990729D02BC3E64(::UnityEngine::GameObject* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_3990729D02BC3E64_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0AD1FA6D95A0C618(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_0AD1FA6D95A0C618_OFFSET))(this, a1);
	}

	::System::Void Method_2_F788DFB7802ADCC9(::System::String* a1, ::System::Single a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_F788DFB7802ADCC9_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_5A6174ED44C1F417(::System::String* a1, ::System::String*& a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_5A6174ED44C1F417_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_2_75DDB26088449959(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::System::String* a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_75DDB26088449959_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_D40A9D8AEF1EFFBA(::System::String* a1, ::System::String*& a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_D40A9D8AEF1EFFBA_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::System::UInt32 Method_2_B4FD20705670097F(::System::String* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_B4FD20705670097F_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_0501C9F947F2E0F1(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD56E4961C91F771_METHOD_2_0501C9F947F2E0F1_OFFSET))(this, a1);
	}
};
