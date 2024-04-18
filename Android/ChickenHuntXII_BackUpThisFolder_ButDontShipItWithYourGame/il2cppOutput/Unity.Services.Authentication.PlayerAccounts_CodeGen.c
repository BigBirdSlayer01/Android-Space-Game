#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 Unity.Services.Authentication.PlayerAccounts.IPlayerAccountService Unity.Services.Core.UnityServicesExtensions::GetPlayerAccountService(Unity.Services.Core.IUnityServices)
extern void UnityServicesExtensions_GetPlayerAccountService_m5411798FA72E2C80C187E7A6B810ED26645A55B6 (void);
// 0x00000002 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountsException::.ctor(System.Int32,System.String,System.Exception)
extern void PlayerAccountsException__ctor_mEEC2657191677598E4D480210A45B9360A341FED (void);
// 0x00000003 Unity.Services.Authentication.PlayerAccounts.PlayerAccountsException Unity.Services.Authentication.PlayerAccounts.PlayerAccountsException::Create(System.Int32,System.String,System.Exception)
extern void PlayerAccountsException_Create_mC082651449CC69A3C23EA36512FB056D704EE1A8 (void);
// 0x00000004 Unity.Services.Authentication.PlayerAccounts.PlayerAccountsException Unity.Services.Authentication.PlayerAccounts.PlayerAccountsExceptionHandler::HandleError(System.String,System.String,System.Exception)
extern void PlayerAccountsExceptionHandler_HandleError_m6C7C8FE938A8EAAFD104171D72111125780EBF7F (void);
// 0x00000005 System.Void Unity.Services.Authentication.PlayerAccounts.IPlayerAccountService::add_SignedIn(System.Action)
// 0x00000006 System.Void Unity.Services.Authentication.PlayerAccounts.IPlayerAccountService::remove_SignedIn(System.Action)
// 0x00000007 System.Void Unity.Services.Authentication.PlayerAccounts.IPlayerAccountService::add_SignedOut(System.Action)
// 0x00000008 System.Void Unity.Services.Authentication.PlayerAccounts.IPlayerAccountService::remove_SignedOut(System.Action)
// 0x00000009 System.Void Unity.Services.Authentication.PlayerAccounts.IPlayerAccountService::add_SignInFailed(System.Action`1<Unity.Services.Core.RequestFailedException>)
// 0x0000000A System.Void Unity.Services.Authentication.PlayerAccounts.IPlayerAccountService::remove_SignInFailed(System.Action`1<Unity.Services.Core.RequestFailedException>)
// 0x0000000B System.String Unity.Services.Authentication.PlayerAccounts.IPlayerAccountService::get_AccessToken()
// 0x0000000C System.String Unity.Services.Authentication.PlayerAccounts.IPlayerAccountService::get_IdToken()
// 0x0000000D System.String Unity.Services.Authentication.PlayerAccounts.IPlayerAccountService::get_AccountPortalUrl()
// 0x0000000E Unity.Services.Authentication.PlayerAccounts.IdToken Unity.Services.Authentication.PlayerAccounts.IPlayerAccountService::get_IdTokenClaims()
// 0x0000000F System.Boolean Unity.Services.Authentication.PlayerAccounts.IPlayerAccountService::get_IsSignedIn()
// 0x00000010 System.Threading.Tasks.Task Unity.Services.Authentication.PlayerAccounts.IPlayerAccountService::StartSignInAsync(System.Boolean)
// 0x00000011 System.Threading.Tasks.Task Unity.Services.Authentication.PlayerAccounts.IPlayerAccountService::RefreshTokenAsync()
// 0x00000012 System.Void Unity.Services.Authentication.PlayerAccounts.IPlayerAccountService::SignOut()
// 0x00000013 System.Void Unity.Services.Authentication.PlayerAccounts.BaseJwt::.ctor()
extern void BaseJwt__ctor_m0ABC9B1E79B8708266516FE0A0E57EEBB2161CE6 (void);
// 0x00000014 System.DateTime Unity.Services.Authentication.PlayerAccounts.BaseJwt::get_ExpirationTime()
extern void BaseJwt_get_ExpirationTime_m10F606FC87A78C9E37E15824D123EF35BB2D8F98 (void);
// 0x00000015 System.DateTime Unity.Services.Authentication.PlayerAccounts.BaseJwt::get_IssuedAtTime()
extern void BaseJwt_get_IssuedAtTime_m846E71C59DBF01EA7A225EE084188C05DC6ABACC (void);
// 0x00000016 System.DateTime Unity.Services.Authentication.PlayerAccounts.BaseJwt::get_NotBeforeTime()
extern void BaseJwt_get_NotBeforeTime_m62F6996B3BCC2A38D61596D9BF132ACB86ABEB03 (void);
// 0x00000017 System.DateTime Unity.Services.Authentication.PlayerAccounts.BaseJwt::ConvertTimestamp(System.Int32)
extern void BaseJwt_ConvertTimestamp_mF9CAA4922250BA82B162B2F2BC753BCF983C8DAA (void);
// 0x00000018 System.Void Unity.Services.Authentication.PlayerAccounts.IdToken::.ctor()
extern void IdToken__ctor_m4807F4A2DD303363E8D3B223A7DF7B6AFBD65487 (void);
// 0x00000019 System.String Unity.Services.Authentication.PlayerAccounts.IdToken::get_Email()
extern void IdToken_get_Email_mCC57C38DC46DA81C3E3B045EECCF56834033072E (void);
// 0x0000001A System.Void Unity.Services.Authentication.PlayerAccounts.IdToken::set_Email(System.String)
extern void IdToken_set_Email_m883A1531E7DCCFCFD3901D454ADAB4A143AC81A2 (void);
// 0x0000001B System.Boolean Unity.Services.Authentication.PlayerAccounts.IdToken::get_EmailVerified()
extern void IdToken_get_EmailVerified_m2D43B5E1BC0378486925CF15CF5A27671811DF8B (void);
// 0x0000001C System.Void Unity.Services.Authentication.PlayerAccounts.IdToken::set_EmailVerified(System.Boolean)
extern void IdToken_set_EmailVerified_m05ABBD1DC91270E55777AB562E541898F08A881C (void);
// 0x0000001D System.Boolean Unity.Services.Authentication.PlayerAccounts.IdToken::get_IsPrivateEmail()
extern void IdToken_get_IsPrivateEmail_m576620877A241AFB763C62E3EF5EB0068D4B9CAF (void);
// 0x0000001E System.Void Unity.Services.Authentication.PlayerAccounts.IdToken::set_IsPrivateEmail(System.Boolean)
extern void IdToken_set_IsPrivateEmail_mBACD627C619F02B00EB7937142A3C9796D573517 (void);
// 0x0000001F System.String Unity.Services.Authentication.PlayerAccounts.IdToken::get_Nonce()
extern void IdToken_get_Nonce_m8B547DE1FCC00EFCBDC48F26174CAA9C16DCD0D2 (void);
// 0x00000020 System.Void Unity.Services.Authentication.PlayerAccounts.IdToken::set_Nonce(System.String)
extern void IdToken_set_Nonce_m0A8464DE977116033ACB30FC9962D13324F26605 (void);
// 0x00000021 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountsErrorResponse::.ctor()
extern void PlayerAccountsErrorResponse__ctor_m1EC8C8E3BD47381A1CD28E6E0F9E53221A9EDCDB (void);
// 0x00000022 System.Void Unity.Services.Authentication.PlayerAccounts.SignInResponse::.ctor()
extern void SignInResponse__ctor_mF2A0FC510E39419118BA56308F27A7053237796B (void);
// 0x00000023 Unity.Services.Authentication.PlayerAccounts.IPlayerAccountService Unity.Services.Authentication.PlayerAccounts.PlayerAccountService::get_Instance()
extern void PlayerAccountService_get_Instance_mC057DD33A67CA90F38A2C0AA500E0115E55D6B25 (void);
// 0x00000024 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountService::set_Instance(Unity.Services.Authentication.PlayerAccounts.IPlayerAccountService)
extern void PlayerAccountService_set_Instance_mDC65144A82E9CC00F8596EE752181B25079CE2AC (void);
// 0x00000025 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::add_SignedIn(System.Action)
extern void PlayerAccountServiceInternal_add_SignedIn_m17FEC58F814882FD50B8C3219749C3FBE57959F7 (void);
// 0x00000026 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::remove_SignedIn(System.Action)
extern void PlayerAccountServiceInternal_remove_SignedIn_m90C786499C8BA987FC95DD1436DE0C4EF8DE14C5 (void);
// 0x00000027 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::add_SignedOut(System.Action)
extern void PlayerAccountServiceInternal_add_SignedOut_mFC60DB49807CAEE46EDDB3F2142AB7453337FBCF (void);
// 0x00000028 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::remove_SignedOut(System.Action)
extern void PlayerAccountServiceInternal_remove_SignedOut_m56297C4E5A240B5660602C40FC113AE7F2D1E993 (void);
// 0x00000029 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::add_SignInFailed(System.Action`1<Unity.Services.Core.RequestFailedException>)
extern void PlayerAccountServiceInternal_add_SignInFailed_m7963D13411ECDF751F8D566509C7B787B61867C6 (void);
// 0x0000002A System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::remove_SignInFailed(System.Action`1<Unity.Services.Core.RequestFailedException>)
extern void PlayerAccountServiceInternal_remove_SignInFailed_m6724D26AD8E65022E860C6B81864C14F9280E214 (void);
// 0x0000002B System.String Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::get_AccountPortalUrl()
extern void PlayerAccountServiceInternal_get_AccountPortalUrl_m2F361C358B1A5BEF843D6BDB62E461758DDDA441 (void);
// 0x0000002C System.Boolean Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::get_IsSignedIn()
extern void PlayerAccountServiceInternal_get_IsSignedIn_m527462FB3D90E2F456C39040701892BA84ECFF91 (void);
// 0x0000002D System.String Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::get_AccessToken()
extern void PlayerAccountServiceInternal_get_AccessToken_m3E9BD39C31727C14F94D1145046BFE48F640AAD1 (void);
// 0x0000002E System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::set_AccessToken(System.String)
extern void PlayerAccountServiceInternal_set_AccessToken_mB92E04E3CBC31F1D142478CB079A77AD056E5928 (void);
// 0x0000002F System.String Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::get_IdToken()
extern void PlayerAccountServiceInternal_get_IdToken_m992996AE93A48F42B165C6F722FB355120CD8F53 (void);
// 0x00000030 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::set_IdToken(System.String)
extern void PlayerAccountServiceInternal_set_IdToken_m95B28959530F5819D926CE8986F7CAA3CC6BBBFF (void);
// 0x00000031 System.String Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::get_RefreshToken()
extern void PlayerAccountServiceInternal_get_RefreshToken_m1DC93AB5DAEEB36FBF688924868983C69C7BAC43 (void);
// 0x00000032 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::set_RefreshToken(System.String)
extern void PlayerAccountServiceInternal_set_RefreshToken_m0238D4D7A4ADE6A3D81FFBCA62314FA9E00ADD5D (void);
// 0x00000033 Unity.Services.Authentication.PlayerAccounts.IdToken Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::get_IdTokenClaims()
extern void PlayerAccountServiceInternal_get_IdTokenClaims_m6D116224ECA25FDB6D1B23B937F643AA72B81778 (void);
// 0x00000034 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::set_IdTokenClaims(Unity.Services.Authentication.PlayerAccounts.IdToken)
extern void PlayerAccountServiceInternal_set_IdTokenClaims_mF17C1550FD93BAFCD1D46C4BBBF5696AA0BC79B3 (void);
// 0x00000035 Unity.Services.Authentication.PlayerAccounts.PlayerAccountState Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::get_SignInState()
extern void PlayerAccountServiceInternal_get_SignInState_m4BA49C5D6B741FF0BFCADE828F1057C8F16B2C30 (void);
// 0x00000036 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::set_SignInState(Unity.Services.Authentication.PlayerAccounts.PlayerAccountState)
extern void PlayerAccountServiceInternal_set_SignInState_m8874FA71324B7BFED792F4DCD3EF6A46F123C47C (void);
// 0x00000037 System.String Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::get_RedirectUri()
extern void PlayerAccountServiceInternal_get_RedirectUri_m7C3396850890021387520CBFFA576D5832755850 (void);
// 0x00000038 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::set_RedirectUri(System.String)
extern void PlayerAccountServiceInternal_set_RedirectUri_m6315D273EC9F9A496BF47E9E5F817A98552D930D (void);
// 0x00000039 System.String Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::get_CodeVerifier()
extern void PlayerAccountServiceInternal_get_CodeVerifier_m628CF323B3CC27386FF37AFDB38C8119E54B92B7 (void);
// 0x0000003A System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::set_CodeVerifier(System.String)
extern void PlayerAccountServiceInternal_set_CodeVerifier_mC508B450CD4CFEEEE6E8A0C626DA325A08BA3E6C (void);
// 0x0000003B System.String Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::get_ClientId()
extern void PlayerAccountServiceInternal_get_ClientId_mBD22C2D7DA99406466B20739F2C2CC41CA98457D (void);
// 0x0000003C System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::.ctor(Unity.Services.Authentication.PlayerAccounts.UnityPlayerAccountSettings,Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Authentication.PlayerAccounts.IJwtDecoder,Unity.Services.Authentication.PlayerAccounts.INetworkHandler)
extern void PlayerAccountServiceInternal__ctor_m21265CF4B32DC3B26E0B546D089DF7DD9CC16CAC (void);
// 0x0000003D System.Threading.Tasks.Task Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::StartSignInAsync(System.Boolean)
extern void PlayerAccountServiceInternal_StartSignInAsync_mE308E4A5E56F28666312B6541BD50E2C76389DA2 (void);
// 0x0000003E System.Threading.Tasks.Task Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::RefreshTokenAsync()
extern void PlayerAccountServiceInternal_RefreshTokenAsync_m68EF580A1C8451A96D88D24525FC64C22EA65D15 (void);
// 0x0000003F System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::SignOut()
extern void PlayerAccountServiceInternal_SignOut_mAEF76585F33127AB14194B4DB38A97E3DCEA3EFA (void);
// 0x00000040 System.String Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::BuildAuthorizationRequestUrl(System.Boolean)
extern void PlayerAccountServiceInternal_BuildAuthorizationRequestUrl_m731E603E568CE4550C23210FFF25DC96715DF7D9 (void);
// 0x00000041 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::OnDeepLinkActivated(System.String)
extern void PlayerAccountServiceInternal_OnDeepLinkActivated_m9C8EE7E5BCF164D3C8CDD2AE8AD22B60FF75B0C8 (void);
// 0x00000042 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::OnAuthCodeReceived(System.String)
extern void PlayerAccountServiceInternal_OnAuthCodeReceived_mF6232EE1C837153024CE8238903C60731833CE02 (void);
// 0x00000043 System.Threading.Tasks.Task Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::SignInRequestAsync(System.String,System.String,System.String)
extern void PlayerAccountServiceInternal_SignInRequestAsync_mEE1E2CDE9A19ABA3EE3CDE7D3EA4E89E8663477B (void);
// 0x00000044 System.Threading.Tasks.Task Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::HandleSignInRequestAsync(System.Func`1<System.Threading.Tasks.Task`1<Unity.Services.Authentication.PlayerAccounts.SignInResponse>>)
extern void PlayerAccountServiceInternal_HandleSignInRequestAsync_mB9EFD1308EF77A737E3ACCEACFFA930815A34C51 (void);
// 0x00000045 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::SendSignInFailedEvent(Unity.Services.Core.RequestFailedException,System.Boolean)
extern void PlayerAccountServiceInternal_SendSignInFailedEvent_mB44A3B5B03BFE926A33677981C0E20B11E07A2C9 (void);
// 0x00000046 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal::CompleteSignIn(Unity.Services.Authentication.PlayerAccounts.SignInResponse)
extern void PlayerAccountServiceInternal_CompleteSignIn_mC4E608F6B50DD018DF6A40A32791725EC7C58031 (void);
// 0x00000047 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal/<StartSignInAsync>d__53::MoveNext()
extern void U3CStartSignInAsyncU3Ed__53_MoveNext_m882471C50F5D577FBF821A297FBAB40CCE118819 (void);
// 0x00000048 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal/<StartSignInAsync>d__53::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CStartSignInAsyncU3Ed__53_SetStateMachine_mA116315C49ADAB0F52E36E2DDB91B05B73049215 (void);
// 0x00000049 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal/<>c__DisplayClass54_0::.ctor()
extern void U3CU3Ec__DisplayClass54_0__ctor_mA1E464253B65D6E3B1ECB085B2906EDF6F3C8AC5 (void);
// 0x0000004A System.Threading.Tasks.Task`1<Unity.Services.Authentication.PlayerAccounts.SignInResponse> Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal/<>c__DisplayClass54_0::<RefreshTokenAsync>b__0()
extern void U3CU3Ec__DisplayClass54_0_U3CRefreshTokenAsyncU3Eb__0_m6C44DE7195BFCC0FE1BF1810A089C9ADF9536F0E (void);
// 0x0000004B System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal/<>c__DisplayClass59_0::.ctor()
extern void U3CU3Ec__DisplayClass59_0__ctor_mBEA0318AB2AB4D58AA3BBF293871A8A6F4064BB7 (void);
// 0x0000004C System.Threading.Tasks.Task`1<Unity.Services.Authentication.PlayerAccounts.SignInResponse> Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal/<>c__DisplayClass59_0::<SignInRequestAsync>b__0()
extern void U3CU3Ec__DisplayClass59_0_U3CSignInRequestAsyncU3Eb__0_m91300BBF6B3D25AE8FB3E058B897777DABA2707F (void);
// 0x0000004D System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal/<HandleSignInRequestAsync>d__60::MoveNext()
extern void U3CHandleSignInRequestAsyncU3Ed__60_MoveNext_m527211B84A8A487CD5274EE637B6DE1B10CFD30B (void);
// 0x0000004E System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal/<HandleSignInRequestAsync>d__60::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CHandleSignInRequestAsyncU3Ed__60_SetStateMachine_m563D8F41DD286A89E6E348E41384BEDEDDE9699E (void);
// 0x0000004F System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountsPackageInitializer::InitializeOnLoad()
extern void PlayerAccountsPackageInitializer_InitializeOnLoad_mAA49E9C9E491DED83CC200EA307915BC3E739299 (void);
// 0x00000050 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountsPackageInitializer::Register(Unity.Services.Core.Internal.CorePackageRegistry)
extern void PlayerAccountsPackageInitializer_Register_mAF6B6D3E908C4BE19A5641CDC7C99EA8FA4961D7 (void);
// 0x00000051 System.Threading.Tasks.Task Unity.Services.Authentication.PlayerAccounts.PlayerAccountsPackageInitializer::Initialize(Unity.Services.Core.Internal.CoreRegistry)
extern void PlayerAccountsPackageInitializer_Initialize_m1A28319E65CB3C42BA008D615FEE116EE882717E (void);
// 0x00000052 System.Threading.Tasks.Task Unity.Services.Authentication.PlayerAccounts.PlayerAccountsPackageInitializer::InitializeInstanceAsync(Unity.Services.Core.Internal.CoreRegistry)
extern void PlayerAccountsPackageInitializer_InitializeInstanceAsync_mA9B067464891AE998E2A69E2778564CA17601D46 (void);
// 0x00000053 Unity.Services.Authentication.PlayerAccounts.PlayerAccountServiceInternal Unity.Services.Authentication.PlayerAccounts.PlayerAccountsPackageInitializer::InitializeService(Unity.Services.Core.Internal.CoreRegistry)
extern void PlayerAccountsPackageInitializer_InitializeService_mB6C727173416EB222BFFDCE48ACEC97753838501 (void);
// 0x00000054 System.Void Unity.Services.Authentication.PlayerAccounts.PlayerAccountsPackageInitializer::.ctor()
extern void PlayerAccountsPackageInitializer__ctor_m54712F149AD812CCFC4480A79E2FCAA979F7BEAE (void);
// 0x00000055 Unity.Services.Authentication.PlayerAccounts.UnityPlayerAccountSettings/SupportedScopesEnum Unity.Services.Authentication.PlayerAccounts.UnityPlayerAccountSettings::get_ScopeFlags()
extern void UnityPlayerAccountSettings_get_ScopeFlags_m8E612AF2701E34EBFEBC531CDDD471D67F2104B9 (void);
// 0x00000056 System.Void Unity.Services.Authentication.PlayerAccounts.UnityPlayerAccountSettings::set_ScopeFlags(Unity.Services.Authentication.PlayerAccounts.UnityPlayerAccountSettings/SupportedScopesEnum)
extern void UnityPlayerAccountSettings_set_ScopeFlags_m89FDB4CF0B1FA3C7D21B539EF58B9F69868B5111 (void);
// 0x00000057 System.String Unity.Services.Authentication.PlayerAccounts.UnityPlayerAccountSettings::get_ClientId()
extern void UnityPlayerAccountSettings_get_ClientId_mA5FC49064A3B3739ACB2566843FC1D952ADCC313 (void);
// 0x00000058 System.Void Unity.Services.Authentication.PlayerAccounts.UnityPlayerAccountSettings::set_ClientId(System.String)
extern void UnityPlayerAccountSettings_set_ClientId_m109D84D9EF03C01EE5389DFD68AF0D52A888F2DD (void);
// 0x00000059 System.String Unity.Services.Authentication.PlayerAccounts.UnityPlayerAccountSettings::get_Scope()
extern void UnityPlayerAccountSettings_get_Scope_m7717F6A990A8620E0C3409AE57FD0B330FA30C85 (void);
// 0x0000005A System.Boolean Unity.Services.Authentication.PlayerAccounts.UnityPlayerAccountSettings::get_UseCustomUri()
extern void UnityPlayerAccountSettings_get_UseCustomUri_mD0307D73500FB411229E3D7486332E293CA248D6 (void);
// 0x0000005B System.String Unity.Services.Authentication.PlayerAccounts.UnityPlayerAccountSettings::get_DeepLinkUriScheme()
extern void UnityPlayerAccountSettings_get_DeepLinkUriScheme_mCBEE28888651083CA2B34B399B46D8B898CCA30A (void);
// 0x0000005C System.String Unity.Services.Authentication.PlayerAccounts.UnityPlayerAccountSettings::get_DeepLinkUriHostPrefix()
extern void UnityPlayerAccountSettings_get_DeepLinkUriHostPrefix_mB4AC31029E77FED3F21BF702A81F842A7F43D737 (void);
// 0x0000005D Unity.Services.Authentication.PlayerAccounts.UnityPlayerAccountSettings Unity.Services.Authentication.PlayerAccounts.UnityPlayerAccountSettings::Load()
extern void UnityPlayerAccountSettings_Load_mD59365B7F1F511C7C49CC76613AF96F0F1761688 (void);
// 0x0000005E System.Void Unity.Services.Authentication.PlayerAccounts.UnityPlayerAccountSettings::.ctor()
extern void UnityPlayerAccountSettings__ctor_m5BD51E2C60A0708F8E179A2C20328B6372C130BE (void);
// 0x0000005F System.Void Unity.Services.Authentication.PlayerAccounts.UnityPlayerAccountSettings::.cctor()
extern void UnityPlayerAccountSettings__cctor_mE32B6DAB701F5965CA3B62A709D24BE30C55CB1C (void);
// 0x00000060 System.Void Unity.Services.Authentication.PlayerAccounts.AndroidBrowserUtils::.ctor(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Authentication.PlayerAccounts.UnityPlayerAccountSettings)
extern void AndroidBrowserUtils__ctor_mDFD7128C444940ECA91F4C1E012B12FB3CDCF22E (void);
// 0x00000061 System.Threading.Tasks.Task Unity.Services.Authentication.PlayerAccounts.AndroidBrowserUtils::LaunchUrlAsync(System.String)
extern void AndroidBrowserUtils_LaunchUrlAsync_m916285069FB83DB2FD7FC5991998A4CAF682BA33 (void);
// 0x00000062 System.Boolean Unity.Services.Authentication.PlayerAccounts.AndroidBrowserUtils::Bind()
extern void AndroidBrowserUtils_Bind_mD38C9632965A001E6A8FF2525D4295B6FE7F13AE (void);
// 0x00000063 System.Void Unity.Services.Authentication.PlayerAccounts.AndroidBrowserUtils::Dismiss()
extern void AndroidBrowserUtils_Dismiss_m71026411804F6A81F9C5432DAC957330FF253E9A (void);
// 0x00000064 System.String Unity.Services.Authentication.PlayerAccounts.AndroidBrowserUtils::GetRedirectUri()
extern void AndroidBrowserUtils_GetRedirectUri_mDA75DBA5C1118556795281439C29CAE0D8E0FF72 (void);
// 0x00000065 Unity.Services.Authentication.PlayerAccounts.IBrowserUtils Unity.Services.Authentication.PlayerAccounts.BrowserUtils::CreateBrowserUtils(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Authentication.PlayerAccounts.UnityPlayerAccountSettings,System.Action`1<System.String>)
extern void BrowserUtils_CreateBrowserUtils_m24B98DB058C510ED32C20B6EC7685C161387C491 (void);
// 0x00000066 System.Threading.Tasks.Task Unity.Services.Authentication.PlayerAccounts.IBrowserUtils::LaunchUrlAsync(System.String)
// 0x00000067 System.Boolean Unity.Services.Authentication.PlayerAccounts.IBrowserUtils::Bind()
// 0x00000068 System.Void Unity.Services.Authentication.PlayerAccounts.IBrowserUtils::Dismiss()
// 0x00000069 System.String Unity.Services.Authentication.PlayerAccounts.IBrowserUtils::GetRedirectUri()
// 0x0000006A System.Void Unity.Services.Authentication.PlayerAccounts.CodeChallengeGenerator::.ctor()
extern void CodeChallengeGenerator__ctor_mA7521011960D225DC4B9E1E69ABC1F50C18A3D1C (void);
// 0x0000006B System.String Unity.Services.Authentication.PlayerAccounts.CodeChallengeGenerator::GenerateCode()
extern void CodeChallengeGenerator_GenerateCode_m04CDF0435E34090CB2D1E431EADAE7BA198C1570 (void);
// 0x0000006C System.String Unity.Services.Authentication.PlayerAccounts.CodeChallengeGenerator::GenerateStateString()
extern void CodeChallengeGenerator_GenerateStateString_m55EFAE6D579831487D665EFC793117D7D33332DE (void);
// 0x0000006D System.String Unity.Services.Authentication.PlayerAccounts.CodeChallengeGenerator::S256EncodeChallenge(System.String)
extern void CodeChallengeGenerator_S256EncodeChallenge_m9E68FD8DAFABDBF738A38AFE69B576A5337B0E7E (void);
// 0x0000006E System.String Unity.Services.Authentication.PlayerAccounts.CodeChallengeGenerator::UrlSafeBase64Encode(System.Byte[])
extern void CodeChallengeGenerator_UrlSafeBase64Encode_mCBCAD0030C93D466499F1C507E5CCB7EA8E24D26 (void);
// 0x0000006F System.Double Unity.Services.Authentication.PlayerAccounts.IDateTimeWrapper::SecondsSinceUnixEpoch()
// 0x00000070 System.DateTime Unity.Services.Authentication.PlayerAccounts.IDateTimeWrapper::get_UtcNow()
// 0x00000071 System.DateTime Unity.Services.Authentication.PlayerAccounts.DateTimeWrapper::get_UtcNow()
extern void DateTimeWrapper_get_UtcNow_mB65E347B1FB3347A07C432946E414146E4C6F925 (void);
// 0x00000072 System.Double Unity.Services.Authentication.PlayerAccounts.DateTimeWrapper::SecondsSinceUnixEpoch()
extern void DateTimeWrapper_SecondsSinceUnixEpoch_m4EAC1A7411DF638817FBA7FA92486F05B40DDD10 (void);
// 0x00000073 System.Void Unity.Services.Authentication.PlayerAccounts.DateTimeWrapper::.ctor()
extern void DateTimeWrapper__ctor_mA901990ADBAF66E9BBD7EA0273FC95C8C26D6A80 (void);
// 0x00000074 System.Void Unity.Services.Authentication.PlayerAccounts.DateTimeWrapper::.cctor()
extern void DateTimeWrapper__cctor_m3BC3E17BAD0D95CD6BA0752A65803C32803E42E7 (void);
// 0x00000075 T Unity.Services.Authentication.PlayerAccounts.IJwtDecoder::Decode(System.String)
// 0x00000076 System.Void Unity.Services.Authentication.PlayerAccounts.JwtDecoder::.ctor(Unity.Services.Authentication.PlayerAccounts.IDateTimeWrapper)
extern void JwtDecoder__ctor_mE364DED6EF2AC45F040333E0DEFCDBF643A1701B (void);
// 0x00000077 T Unity.Services.Authentication.PlayerAccounts.JwtDecoder::Decode(System.String)
// 0x00000078 System.Byte[] Unity.Services.Authentication.PlayerAccounts.JwtDecoder::Base64UrlDecode(System.String)
extern void JwtDecoder_Base64UrlDecode_m9ED5C18B8D620F4353B0BBE15E05B7BBC0864951 (void);
// 0x00000079 System.Void Unity.Services.Authentication.PlayerAccounts.JwtDecoder::.cctor()
extern void JwtDecoder__cctor_m5F2F2B9BAA93A16B042CC831047B09736FCCFBE7 (void);
// 0x0000007A System.Void Unity.Services.Authentication.PlayerAccounts.Logger::Log(System.Object)
extern void Logger_Log_m54AFB38212819B82C4F1252C468CA251DF614435 (void);
// 0x0000007B System.Void Unity.Services.Authentication.PlayerAccounts.Logger::LogWarning(System.Object)
extern void Logger_LogWarning_m248E5FE6130DAE660FC3D0D552B06B0DED46D5C8 (void);
// 0x0000007C System.Void Unity.Services.Authentication.PlayerAccounts.Logger::LogError(System.Object)
extern void Logger_LogError_m9C8DB472CD6ED7EEBD27C622ACD7E6D0D79D01CE (void);
// 0x0000007D System.Void Unity.Services.Authentication.PlayerAccounts.Logger::LogException(System.Exception)
extern void Logger_LogException_m8F4E31BC51040F2B887A6F38B6E8ABA63824485F (void);
// 0x0000007E System.Void Unity.Services.Authentication.PlayerAccounts.Logger::LogAssertion(System.Object)
extern void Logger_LogAssertion_m24712D4EF9BF82685DC9F1EC67B95C3E2A4AF44C (void);
// 0x0000007F System.Void Unity.Services.Authentication.PlayerAccounts.Logger::LogVerbose(System.Object)
extern void Logger_LogVerbose_mDD802F6EBB8939BABB1AAC94CCBF7B66C9A2FAB2 (void);
// 0x00000080 System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Authentication.PlayerAccounts.HttpUtilities::ParseQueryString(System.String)
extern void HttpUtilities_ParseQueryString_m2E1186F8452852A063F82EB38302B99ACB484100 (void);
// 0x00000081 System.String Unity.Services.Authentication.PlayerAccounts.HttpUtilities::EncodeQueryString(System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void HttpUtilities_EncodeQueryString_m8EB82F7E9AF9DA41D16BD3A429432AA0D9073093 (void);
// 0x00000082 System.Boolean Unity.Services.Authentication.PlayerAccounts.HttpUtilities::TryBindListenerOnFreePort(System.Net.HttpListener&,System.Int32&)
extern void HttpUtilities_TryBindListenerOnFreePort_m85DF18BA446CDD4392E4C661CDBB56708ED6592B (void);
// 0x00000083 System.String Unity.Services.Authentication.PlayerAccounts.HttpUtilities::EscapeUrlString(System.String)
extern void HttpUtilities_EscapeUrlString_m27798876409A17B0E4810A6EA6B2E905A1779F24 (void);
// 0x00000084 System.String Unity.Services.Authentication.PlayerAccounts.HttpUtilities::UnescapeUrlString(System.String)
extern void HttpUtilities_UnescapeUrlString_m2275E1DC1B80EB7AB61637A0999F4891ABBABC40 (void);
// 0x00000085 System.Int32 Unity.Services.Authentication.PlayerAccounts.INetworkConfiguration::get_Retries()
// 0x00000086 System.Int32 Unity.Services.Authentication.PlayerAccounts.INetworkConfiguration::get_Timeout()
// 0x00000087 System.Threading.Tasks.Task`1<T> Unity.Services.Authentication.PlayerAccounts.INetworkHandler::GetAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000088 System.Threading.Tasks.Task`1<T> Unity.Services.Authentication.PlayerAccounts.INetworkHandler::PostAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000089 System.Threading.Tasks.Task`1<T> Unity.Services.Authentication.PlayerAccounts.INetworkHandler::PostAsync(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x0000008A System.Threading.Tasks.Task`1<T> Unity.Services.Authentication.PlayerAccounts.INetworkHandler::PutAsync(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x0000008B System.Threading.Tasks.Task Unity.Services.Authentication.PlayerAccounts.INetworkHandler::DeleteAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x0000008C System.Threading.Tasks.Task`1<T> Unity.Services.Authentication.PlayerAccounts.INetworkHandler::DeleteAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x0000008D System.Int32 Unity.Services.Authentication.PlayerAccounts.NetworkConfiguration::get_Retries()
extern void NetworkConfiguration_get_Retries_m22A8CF4D7EFF3E7A7F6DBB47B989BA7E0C426EDB (void);
// 0x0000008E System.Void Unity.Services.Authentication.PlayerAccounts.NetworkConfiguration::set_Retries(System.Int32)
extern void NetworkConfiguration_set_Retries_m7B67F2EB85CE31A73EAD8A5452EB3C439E085793 (void);
// 0x0000008F System.Int32 Unity.Services.Authentication.PlayerAccounts.NetworkConfiguration::get_Timeout()
extern void NetworkConfiguration_get_Timeout_m5ED5EED2F32AEFC34D9F1C9E68F074233E1453D9 (void);
// 0x00000090 System.Void Unity.Services.Authentication.PlayerAccounts.NetworkConfiguration::set_Timeout(System.Int32)
extern void NetworkConfiguration_set_Timeout_m7B479B893B3B1471F4A428CD6BC1A63A719665C3 (void);
// 0x00000091 System.Void Unity.Services.Authentication.PlayerAccounts.NetworkConfiguration::.ctor()
extern void NetworkConfiguration__ctor_mA9B1E04C35ACE9A30A5D525E949DC7C9027330C2 (void);
// 0x00000092 Unity.Services.Authentication.PlayerAccounts.INetworkConfiguration Unity.Services.Authentication.PlayerAccounts.NetworkHandler::get_Configuration()
extern void NetworkHandler_get_Configuration_m50F5CD18AB54068DDF841DBE0DADDADEF4F5707F (void);
// 0x00000093 System.Void Unity.Services.Authentication.PlayerAccounts.NetworkHandler::.ctor()
extern void NetworkHandler__ctor_m0D4A836C3FFBABEDE51D0C4321D2192F89766074 (void);
// 0x00000094 System.Threading.Tasks.Task`1<T> Unity.Services.Authentication.PlayerAccounts.NetworkHandler::GetAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000095 System.Threading.Tasks.Task`1<T> Unity.Services.Authentication.PlayerAccounts.NetworkHandler::PostAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000096 System.Threading.Tasks.Task`1<T> Unity.Services.Authentication.PlayerAccounts.NetworkHandler::PostAsync(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000097 System.Threading.Tasks.Task`1<T> Unity.Services.Authentication.PlayerAccounts.NetworkHandler::PutAsync(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000098 System.Threading.Tasks.Task Unity.Services.Authentication.PlayerAccounts.NetworkHandler::DeleteAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void NetworkHandler_DeleteAsync_mC99F5F5E34EC0194F37FD6845EF56DBA01FEE3DC (void);
// 0x00000099 System.Threading.Tasks.Task`1<T> Unity.Services.Authentication.PlayerAccounts.NetworkHandler::DeleteAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x0000009A Unity.Services.Authentication.PlayerAccounts.INetworkConfiguration Unity.Services.Authentication.PlayerAccounts.WebRequest::get_Configuration()
extern void WebRequest_get_Configuration_mF73075FF2224D1F9CA9DEEE29C1ED796B57DE1DA (void);
// 0x0000009B System.Int32 Unity.Services.Authentication.PlayerAccounts.WebRequest::get_Retries()
extern void WebRequest_get_Retries_m31E5DB371C9CAEBF27035E99230CD11B14220DFD (void);
// 0x0000009C System.Void Unity.Services.Authentication.PlayerAccounts.WebRequest::set_Retries(System.Int32)
extern void WebRequest_set_Retries_m040E2FC502CC6890662987494C59480B676A5369 (void);
// 0x0000009D System.Void Unity.Services.Authentication.PlayerAccounts.WebRequest::.ctor(Unity.Services.Authentication.PlayerAccounts.INetworkConfiguration,Unity.Services.Authentication.PlayerAccounts.WebRequestVerb,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.String)
extern void WebRequest__ctor_m12D76239C00E3E973CA7B04CFAEAB1F1E0F64A32 (void);
// 0x0000009E System.Threading.Tasks.Task Unity.Services.Authentication.PlayerAccounts.WebRequest::SendAsync()
extern void WebRequest_SendAsync_mDCAF9DF3C421B4C2BD416CABCD956155815E0904 (void);
// 0x0000009F System.Threading.Tasks.Task`1<T> Unity.Services.Authentication.PlayerAccounts.WebRequest::SendAsync()
// 0x000000A0 System.Threading.Tasks.Task`1<System.String> Unity.Services.Authentication.PlayerAccounts.WebRequest::SendAttemptAsync(System.Threading.Tasks.TaskCompletionSource`1<System.String>)
extern void WebRequest_SendAttemptAsync_m815CFCAD8AA7A7721A4CD76927D6199D19A7A9C3 (void);
// 0x000000A1 UnityEngine.Networking.UnityWebRequest Unity.Services.Authentication.PlayerAccounts.WebRequest::Build()
extern void WebRequest_Build_mF7D4D19D6180FDAF959CC6EEA8C82D2090FD1E91 (void);
// 0x000000A2 System.Void Unity.Services.Authentication.PlayerAccounts.WebRequest::RequestCompleted(System.Threading.Tasks.TaskCompletionSource`1<System.String>,System.Int64,System.Boolean,System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void WebRequest_RequestCompleted_m52978E443AC8A2B74AFE93955ECBA0837289955A (void);
// 0x000000A3 System.Boolean Unity.Services.Authentication.PlayerAccounts.WebRequest::RequestHasServerError(UnityEngine.Networking.UnityWebRequest)
extern void WebRequest_RequestHasServerError_mA3865941549FD662041433133B46C57DB0331707 (void);
// 0x000000A4 System.Boolean Unity.Services.Authentication.PlayerAccounts.WebRequest::RequestHasNetworkError(UnityEngine.Networking.UnityWebRequest)
extern void WebRequest_RequestHasNetworkError_mA6635AAE75369AED4B3865E4BC5053330AD52951 (void);
// 0x000000A5 System.Void Unity.Services.Authentication.PlayerAccounts.WebRequest/<SendAsync>d__15`1::MoveNext()
// 0x000000A6 System.Void Unity.Services.Authentication.PlayerAccounts.WebRequest/<SendAsync>d__15`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x000000A7 System.Void Unity.Services.Authentication.PlayerAccounts.WebRequest/<>c__DisplayClass16_0::.ctor()
extern void U3CU3Ec__DisplayClass16_0__ctor_mBC907D2678C734CB788DEA29E952317A3907F193 (void);
// 0x000000A8 System.Void Unity.Services.Authentication.PlayerAccounts.WebRequest/<>c__DisplayClass16_0::<SendAttemptAsync>b__0(UnityEngine.AsyncOperation)
extern void U3CU3Ec__DisplayClass16_0_U3CSendAttemptAsyncU3Eb__0_m3F6B7777809715550835C3240E46DC27F1CD82EF (void);
// 0x000000A9 System.Boolean Unity.Services.Authentication.PlayerAccounts.WebRequestException::get_NetworkError()
extern void WebRequestException_get_NetworkError_m3941728E326EE8C178D6A4FE2543649EAA00CB44 (void);
// 0x000000AA System.Void Unity.Services.Authentication.PlayerAccounts.WebRequestException::set_NetworkError(System.Boolean)
extern void WebRequestException_set_NetworkError_mF0B50E370738756950332FF714E2382454C7D127 (void);
// 0x000000AB System.Boolean Unity.Services.Authentication.PlayerAccounts.WebRequestException::get_DeserializationError()
extern void WebRequestException_get_DeserializationError_m4193682895BEDCFB7118CF05C131744388CA100B (void);
// 0x000000AC System.Void Unity.Services.Authentication.PlayerAccounts.WebRequestException::set_DeserializationError(System.Boolean)
extern void WebRequestException_set_DeserializationError_mCA7E7DF7274DC26A1B0D457A884F84DE433F89F3 (void);
// 0x000000AD System.Boolean Unity.Services.Authentication.PlayerAccounts.WebRequestException::get_ServerError()
extern void WebRequestException_get_ServerError_m5A8E9EA217B750DA44062EA79FC195A4120AF12E (void);
// 0x000000AE System.Void Unity.Services.Authentication.PlayerAccounts.WebRequestException::set_ServerError(System.Boolean)
extern void WebRequestException_set_ServerError_mF98B915119BC8BDFA6A5C3378E21EE471DA8B1CE (void);
// 0x000000AF System.Int64 Unity.Services.Authentication.PlayerAccounts.WebRequestException::get_ResponseCode()
extern void WebRequestException_get_ResponseCode_m1D0ECFA3B5ACEE493A9D8413E0DB51586BBB4531 (void);
// 0x000000B0 System.Void Unity.Services.Authentication.PlayerAccounts.WebRequestException::set_ResponseCode(System.Int64)
extern void WebRequestException_set_ResponseCode_m174F300F6300AD0159662806B52F7A767AB3D24D (void);
// 0x000000B1 System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Authentication.PlayerAccounts.WebRequestException::get_ResponseHeaders()
extern void WebRequestException_get_ResponseHeaders_m9037A238F640C182A60BA2A4537D7B19BAC9074A (void);
// 0x000000B2 System.Void Unity.Services.Authentication.PlayerAccounts.WebRequestException::set_ResponseHeaders(System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void WebRequestException_set_ResponseHeaders_m187BD801FE5DA1F62B43BDC9D4E38474E1F74B96 (void);
// 0x000000B3 System.Void Unity.Services.Authentication.PlayerAccounts.WebRequestException::.ctor(System.Boolean,System.Boolean,System.Boolean,System.Int64,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void WebRequestException__ctor_m87ABE5E55E4638147E41228EDF534B998B8104E6 (void);
// 0x000000B4 System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Authentication.PlayerAccounts.UriHelper::ParseQueryString(System.String)
extern void UriHelper_ParseQueryString_m5EEAB1F7361B77A0886E86A71A26A5D988C5494F (void);
// 0x000000B5 System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
extern void U3CPrivateImplementationDetailsU3E_ComputeStringHash_mE1A4D4ABE1698076BD601ADC61A36046F4B52889 (void);
static Il2CppMethodPointer s_methodPointers[181] = 
{
	UnityServicesExtensions_GetPlayerAccountService_m5411798FA72E2C80C187E7A6B810ED26645A55B6,
	PlayerAccountsException__ctor_mEEC2657191677598E4D480210A45B9360A341FED,
	PlayerAccountsException_Create_mC082651449CC69A3C23EA36512FB056D704EE1A8,
	PlayerAccountsExceptionHandler_HandleError_m6C7C8FE938A8EAAFD104171D72111125780EBF7F,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BaseJwt__ctor_m0ABC9B1E79B8708266516FE0A0E57EEBB2161CE6,
	BaseJwt_get_ExpirationTime_m10F606FC87A78C9E37E15824D123EF35BB2D8F98,
	BaseJwt_get_IssuedAtTime_m846E71C59DBF01EA7A225EE084188C05DC6ABACC,
	BaseJwt_get_NotBeforeTime_m62F6996B3BCC2A38D61596D9BF132ACB86ABEB03,
	BaseJwt_ConvertTimestamp_mF9CAA4922250BA82B162B2F2BC753BCF983C8DAA,
	IdToken__ctor_m4807F4A2DD303363E8D3B223A7DF7B6AFBD65487,
	IdToken_get_Email_mCC57C38DC46DA81C3E3B045EECCF56834033072E,
	IdToken_set_Email_m883A1531E7DCCFCFD3901D454ADAB4A143AC81A2,
	IdToken_get_EmailVerified_m2D43B5E1BC0378486925CF15CF5A27671811DF8B,
	IdToken_set_EmailVerified_m05ABBD1DC91270E55777AB562E541898F08A881C,
	IdToken_get_IsPrivateEmail_m576620877A241AFB763C62E3EF5EB0068D4B9CAF,
	IdToken_set_IsPrivateEmail_mBACD627C619F02B00EB7937142A3C9796D573517,
	IdToken_get_Nonce_m8B547DE1FCC00EFCBDC48F26174CAA9C16DCD0D2,
	IdToken_set_Nonce_m0A8464DE977116033ACB30FC9962D13324F26605,
	PlayerAccountsErrorResponse__ctor_m1EC8C8E3BD47381A1CD28E6E0F9E53221A9EDCDB,
	SignInResponse__ctor_mF2A0FC510E39419118BA56308F27A7053237796B,
	PlayerAccountService_get_Instance_mC057DD33A67CA90F38A2C0AA500E0115E55D6B25,
	PlayerAccountService_set_Instance_mDC65144A82E9CC00F8596EE752181B25079CE2AC,
	PlayerAccountServiceInternal_add_SignedIn_m17FEC58F814882FD50B8C3219749C3FBE57959F7,
	PlayerAccountServiceInternal_remove_SignedIn_m90C786499C8BA987FC95DD1436DE0C4EF8DE14C5,
	PlayerAccountServiceInternal_add_SignedOut_mFC60DB49807CAEE46EDDB3F2142AB7453337FBCF,
	PlayerAccountServiceInternal_remove_SignedOut_m56297C4E5A240B5660602C40FC113AE7F2D1E993,
	PlayerAccountServiceInternal_add_SignInFailed_m7963D13411ECDF751F8D566509C7B787B61867C6,
	PlayerAccountServiceInternal_remove_SignInFailed_m6724D26AD8E65022E860C6B81864C14F9280E214,
	PlayerAccountServiceInternal_get_AccountPortalUrl_m2F361C358B1A5BEF843D6BDB62E461758DDDA441,
	PlayerAccountServiceInternal_get_IsSignedIn_m527462FB3D90E2F456C39040701892BA84ECFF91,
	PlayerAccountServiceInternal_get_AccessToken_m3E9BD39C31727C14F94D1145046BFE48F640AAD1,
	PlayerAccountServiceInternal_set_AccessToken_mB92E04E3CBC31F1D142478CB079A77AD056E5928,
	PlayerAccountServiceInternal_get_IdToken_m992996AE93A48F42B165C6F722FB355120CD8F53,
	PlayerAccountServiceInternal_set_IdToken_m95B28959530F5819D926CE8986F7CAA3CC6BBBFF,
	PlayerAccountServiceInternal_get_RefreshToken_m1DC93AB5DAEEB36FBF688924868983C69C7BAC43,
	PlayerAccountServiceInternal_set_RefreshToken_m0238D4D7A4ADE6A3D81FFBCA62314FA9E00ADD5D,
	PlayerAccountServiceInternal_get_IdTokenClaims_m6D116224ECA25FDB6D1B23B937F643AA72B81778,
	PlayerAccountServiceInternal_set_IdTokenClaims_mF17C1550FD93BAFCD1D46C4BBBF5696AA0BC79B3,
	PlayerAccountServiceInternal_get_SignInState_m4BA49C5D6B741FF0BFCADE828F1057C8F16B2C30,
	PlayerAccountServiceInternal_set_SignInState_m8874FA71324B7BFED792F4DCD3EF6A46F123C47C,
	PlayerAccountServiceInternal_get_RedirectUri_m7C3396850890021387520CBFFA576D5832755850,
	PlayerAccountServiceInternal_set_RedirectUri_m6315D273EC9F9A496BF47E9E5F817A98552D930D,
	PlayerAccountServiceInternal_get_CodeVerifier_m628CF323B3CC27386FF37AFDB38C8119E54B92B7,
	PlayerAccountServiceInternal_set_CodeVerifier_mC508B450CD4CFEEEE6E8A0C626DA325A08BA3E6C,
	PlayerAccountServiceInternal_get_ClientId_mBD22C2D7DA99406466B20739F2C2CC41CA98457D,
	PlayerAccountServiceInternal__ctor_m21265CF4B32DC3B26E0B546D089DF7DD9CC16CAC,
	PlayerAccountServiceInternal_StartSignInAsync_mE308E4A5E56F28666312B6541BD50E2C76389DA2,
	PlayerAccountServiceInternal_RefreshTokenAsync_m68EF580A1C8451A96D88D24525FC64C22EA65D15,
	PlayerAccountServiceInternal_SignOut_mAEF76585F33127AB14194B4DB38A97E3DCEA3EFA,
	PlayerAccountServiceInternal_BuildAuthorizationRequestUrl_m731E603E568CE4550C23210FFF25DC96715DF7D9,
	PlayerAccountServiceInternal_OnDeepLinkActivated_m9C8EE7E5BCF164D3C8CDD2AE8AD22B60FF75B0C8,
	PlayerAccountServiceInternal_OnAuthCodeReceived_mF6232EE1C837153024CE8238903C60731833CE02,
	PlayerAccountServiceInternal_SignInRequestAsync_mEE1E2CDE9A19ABA3EE3CDE7D3EA4E89E8663477B,
	PlayerAccountServiceInternal_HandleSignInRequestAsync_mB9EFD1308EF77A737E3ACCEACFFA930815A34C51,
	PlayerAccountServiceInternal_SendSignInFailedEvent_mB44A3B5B03BFE926A33677981C0E20B11E07A2C9,
	PlayerAccountServiceInternal_CompleteSignIn_mC4E608F6B50DD018DF6A40A32791725EC7C58031,
	U3CStartSignInAsyncU3Ed__53_MoveNext_m882471C50F5D577FBF821A297FBAB40CCE118819,
	U3CStartSignInAsyncU3Ed__53_SetStateMachine_mA116315C49ADAB0F52E36E2DDB91B05B73049215,
	U3CU3Ec__DisplayClass54_0__ctor_mA1E464253B65D6E3B1ECB085B2906EDF6F3C8AC5,
	U3CU3Ec__DisplayClass54_0_U3CRefreshTokenAsyncU3Eb__0_m6C44DE7195BFCC0FE1BF1810A089C9ADF9536F0E,
	U3CU3Ec__DisplayClass59_0__ctor_mBEA0318AB2AB4D58AA3BBF293871A8A6F4064BB7,
	U3CU3Ec__DisplayClass59_0_U3CSignInRequestAsyncU3Eb__0_m91300BBF6B3D25AE8FB3E058B897777DABA2707F,
	U3CHandleSignInRequestAsyncU3Ed__60_MoveNext_m527211B84A8A487CD5274EE637B6DE1B10CFD30B,
	U3CHandleSignInRequestAsyncU3Ed__60_SetStateMachine_m563D8F41DD286A89E6E348E41384BEDEDDE9699E,
	PlayerAccountsPackageInitializer_InitializeOnLoad_mAA49E9C9E491DED83CC200EA307915BC3E739299,
	PlayerAccountsPackageInitializer_Register_mAF6B6D3E908C4BE19A5641CDC7C99EA8FA4961D7,
	PlayerAccountsPackageInitializer_Initialize_m1A28319E65CB3C42BA008D615FEE116EE882717E,
	PlayerAccountsPackageInitializer_InitializeInstanceAsync_mA9B067464891AE998E2A69E2778564CA17601D46,
	PlayerAccountsPackageInitializer_InitializeService_mB6C727173416EB222BFFDCE48ACEC97753838501,
	PlayerAccountsPackageInitializer__ctor_m54712F149AD812CCFC4480A79E2FCAA979F7BEAE,
	UnityPlayerAccountSettings_get_ScopeFlags_m8E612AF2701E34EBFEBC531CDDD471D67F2104B9,
	UnityPlayerAccountSettings_set_ScopeFlags_m89FDB4CF0B1FA3C7D21B539EF58B9F69868B5111,
	UnityPlayerAccountSettings_get_ClientId_mA5FC49064A3B3739ACB2566843FC1D952ADCC313,
	UnityPlayerAccountSettings_set_ClientId_m109D84D9EF03C01EE5389DFD68AF0D52A888F2DD,
	UnityPlayerAccountSettings_get_Scope_m7717F6A990A8620E0C3409AE57FD0B330FA30C85,
	UnityPlayerAccountSettings_get_UseCustomUri_mD0307D73500FB411229E3D7486332E293CA248D6,
	UnityPlayerAccountSettings_get_DeepLinkUriScheme_mCBEE28888651083CA2B34B399B46D8B898CCA30A,
	UnityPlayerAccountSettings_get_DeepLinkUriHostPrefix_mB4AC31029E77FED3F21BF702A81F842A7F43D737,
	UnityPlayerAccountSettings_Load_mD59365B7F1F511C7C49CC76613AF96F0F1761688,
	UnityPlayerAccountSettings__ctor_m5BD51E2C60A0708F8E179A2C20328B6372C130BE,
	UnityPlayerAccountSettings__cctor_mE32B6DAB701F5965CA3B62A709D24BE30C55CB1C,
	AndroidBrowserUtils__ctor_mDFD7128C444940ECA91F4C1E012B12FB3CDCF22E,
	AndroidBrowserUtils_LaunchUrlAsync_m916285069FB83DB2FD7FC5991998A4CAF682BA33,
	AndroidBrowserUtils_Bind_mD38C9632965A001E6A8FF2525D4295B6FE7F13AE,
	AndroidBrowserUtils_Dismiss_m71026411804F6A81F9C5432DAC957330FF253E9A,
	AndroidBrowserUtils_GetRedirectUri_mDA75DBA5C1118556795281439C29CAE0D8E0FF72,
	BrowserUtils_CreateBrowserUtils_m24B98DB058C510ED32C20B6EC7685C161387C491,
	NULL,
	NULL,
	NULL,
	NULL,
	CodeChallengeGenerator__ctor_mA7521011960D225DC4B9E1E69ABC1F50C18A3D1C,
	CodeChallengeGenerator_GenerateCode_m04CDF0435E34090CB2D1E431EADAE7BA198C1570,
	CodeChallengeGenerator_GenerateStateString_m55EFAE6D579831487D665EFC793117D7D33332DE,
	CodeChallengeGenerator_S256EncodeChallenge_m9E68FD8DAFABDBF738A38AFE69B576A5337B0E7E,
	CodeChallengeGenerator_UrlSafeBase64Encode_mCBCAD0030C93D466499F1C507E5CCB7EA8E24D26,
	NULL,
	NULL,
	DateTimeWrapper_get_UtcNow_mB65E347B1FB3347A07C432946E414146E4C6F925,
	DateTimeWrapper_SecondsSinceUnixEpoch_m4EAC1A7411DF638817FBA7FA92486F05B40DDD10,
	DateTimeWrapper__ctor_mA901990ADBAF66E9BBD7EA0273FC95C8C26D6A80,
	DateTimeWrapper__cctor_m3BC3E17BAD0D95CD6BA0752A65803C32803E42E7,
	NULL,
	JwtDecoder__ctor_mE364DED6EF2AC45F040333E0DEFCDBF643A1701B,
	NULL,
	JwtDecoder_Base64UrlDecode_m9ED5C18B8D620F4353B0BBE15E05B7BBC0864951,
	JwtDecoder__cctor_m5F2F2B9BAA93A16B042CC831047B09736FCCFBE7,
	Logger_Log_m54AFB38212819B82C4F1252C468CA251DF614435,
	Logger_LogWarning_m248E5FE6130DAE660FC3D0D552B06B0DED46D5C8,
	Logger_LogError_m9C8DB472CD6ED7EEBD27C622ACD7E6D0D79D01CE,
	Logger_LogException_m8F4E31BC51040F2B887A6F38B6E8ABA63824485F,
	Logger_LogAssertion_m24712D4EF9BF82685DC9F1EC67B95C3E2A4AF44C,
	Logger_LogVerbose_mDD802F6EBB8939BABB1AAC94CCBF7B66C9A2FAB2,
	HttpUtilities_ParseQueryString_m2E1186F8452852A063F82EB38302B99ACB484100,
	HttpUtilities_EncodeQueryString_m8EB82F7E9AF9DA41D16BD3A429432AA0D9073093,
	HttpUtilities_TryBindListenerOnFreePort_m85DF18BA446CDD4392E4C661CDBB56708ED6592B,
	HttpUtilities_EscapeUrlString_m27798876409A17B0E4810A6EA6B2E905A1779F24,
	HttpUtilities_UnescapeUrlString_m2275E1DC1B80EB7AB61637A0999F4891ABBABC40,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NetworkConfiguration_get_Retries_m22A8CF4D7EFF3E7A7F6DBB47B989BA7E0C426EDB,
	NetworkConfiguration_set_Retries_m7B67F2EB85CE31A73EAD8A5452EB3C439E085793,
	NetworkConfiguration_get_Timeout_m5ED5EED2F32AEFC34D9F1C9E68F074233E1453D9,
	NetworkConfiguration_set_Timeout_m7B479B893B3B1471F4A428CD6BC1A63A719665C3,
	NetworkConfiguration__ctor_mA9B1E04C35ACE9A30A5D525E949DC7C9027330C2,
	NetworkHandler_get_Configuration_m50F5CD18AB54068DDF841DBE0DADDADEF4F5707F,
	NetworkHandler__ctor_m0D4A836C3FFBABEDE51D0C4321D2192F89766074,
	NULL,
	NULL,
	NULL,
	NULL,
	NetworkHandler_DeleteAsync_mC99F5F5E34EC0194F37FD6845EF56DBA01FEE3DC,
	NULL,
	WebRequest_get_Configuration_mF73075FF2224D1F9CA9DEEE29C1ED796B57DE1DA,
	WebRequest_get_Retries_m31E5DB371C9CAEBF27035E99230CD11B14220DFD,
	WebRequest_set_Retries_m040E2FC502CC6890662987494C59480B676A5369,
	WebRequest__ctor_m12D76239C00E3E973CA7B04CFAEAB1F1E0F64A32,
	WebRequest_SendAsync_mDCAF9DF3C421B4C2BD416CABCD956155815E0904,
	NULL,
	WebRequest_SendAttemptAsync_m815CFCAD8AA7A7721A4CD76927D6199D19A7A9C3,
	WebRequest_Build_mF7D4D19D6180FDAF959CC6EEA8C82D2090FD1E91,
	WebRequest_RequestCompleted_m52978E443AC8A2B74AFE93955ECBA0837289955A,
	WebRequest_RequestHasServerError_mA3865941549FD662041433133B46C57DB0331707,
	WebRequest_RequestHasNetworkError_mA6635AAE75369AED4B3865E4BC5053330AD52951,
	NULL,
	NULL,
	U3CU3Ec__DisplayClass16_0__ctor_mBC907D2678C734CB788DEA29E952317A3907F193,
	U3CU3Ec__DisplayClass16_0_U3CSendAttemptAsyncU3Eb__0_m3F6B7777809715550835C3240E46DC27F1CD82EF,
	WebRequestException_get_NetworkError_m3941728E326EE8C178D6A4FE2543649EAA00CB44,
	WebRequestException_set_NetworkError_mF0B50E370738756950332FF714E2382454C7D127,
	WebRequestException_get_DeserializationError_m4193682895BEDCFB7118CF05C131744388CA100B,
	WebRequestException_set_DeserializationError_mCA7E7DF7274DC26A1B0D457A884F84DE433F89F3,
	WebRequestException_get_ServerError_m5A8E9EA217B750DA44062EA79FC195A4120AF12E,
	WebRequestException_set_ServerError_mF98B915119BC8BDFA6A5C3378E21EE471DA8B1CE,
	WebRequestException_get_ResponseCode_m1D0ECFA3B5ACEE493A9D8413E0DB51586BBB4531,
	WebRequestException_set_ResponseCode_m174F300F6300AD0159662806B52F7A767AB3D24D,
	WebRequestException_get_ResponseHeaders_m9037A238F640C182A60BA2A4537D7B19BAC9074A,
	WebRequestException_set_ResponseHeaders_m187BD801FE5DA1F62B43BDC9D4E38474E1F74B96,
	WebRequestException__ctor_m87ABE5E55E4638147E41228EDF534B998B8104E6,
	UriHelper_ParseQueryString_m5EEAB1F7361B77A0886E86A71A26A5D988C5494F,
	U3CPrivateImplementationDetailsU3E_ComputeStringHash_mE1A4D4ABE1698076BD601ADC61A36046F4B52889,
};
extern void U3CStartSignInAsyncU3Ed__53_MoveNext_m882471C50F5D577FBF821A297FBAB40CCE118819_AdjustorThunk (void);
extern void U3CStartSignInAsyncU3Ed__53_SetStateMachine_mA116315C49ADAB0F52E36E2DDB91B05B73049215_AdjustorThunk (void);
extern void U3CHandleSignInRequestAsyncU3Ed__60_MoveNext_m527211B84A8A487CD5274EE637B6DE1B10CFD30B_AdjustorThunk (void);
extern void U3CHandleSignInRequestAsyncU3Ed__60_SetStateMachine_m563D8F41DD286A89E6E348E41384BEDEDDE9699E_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[4] = 
{
	{ 0x06000047, U3CStartSignInAsyncU3Ed__53_MoveNext_m882471C50F5D577FBF821A297FBAB40CCE118819_AdjustorThunk },
	{ 0x06000048, U3CStartSignInAsyncU3Ed__53_SetStateMachine_mA116315C49ADAB0F52E36E2DDB91B05B73049215_AdjustorThunk },
	{ 0x0600004D, U3CHandleSignInRequestAsyncU3Ed__60_MoveNext_m527211B84A8A487CD5274EE637B6DE1B10CFD30B_AdjustorThunk },
	{ 0x0600004E, U3CHandleSignInRequestAsyncU3Ed__60_SetStateMachine_m563D8F41DD286A89E6E348E41384BEDEDDE9699E_AdjustorThunk },
};
static const int32_t s_InvokerIndices[181] = 
{
	7088,
	1240,
	6022,
	6047,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	4902,
	4726,
	4726,
	4726,
	3078,
	4902,
	4786,
	3981,
	4711,
	3903,
	4711,
	3903,
	4786,
	3981,
	4902,
	4902,
	7422,
	7315,
	3981,
	3981,
	3981,
	3981,
	3981,
	3981,
	4786,
	4711,
	4786,
	3981,
	4786,
	3981,
	4786,
	3981,
	4786,
	3981,
	4762,
	3960,
	4786,
	3981,
	4786,
	3981,
	4786,
	942,
	3521,
	4786,
	4902,
	3521,
	3981,
	3981,
	1131,
	3534,
	2267,
	3981,
	4902,
	3981,
	4902,
	4786,
	4902,
	4786,
	4902,
	3981,
	7451,
	3981,
	3534,
	3534,
	3534,
	4902,
	4762,
	3960,
	4786,
	3981,
	4786,
	4711,
	4786,
	4786,
	7422,
	4902,
	7451,
	2278,
	3534,
	4711,
	4902,
	4786,
	6047,
	0,
	0,
	0,
	0,
	4902,
	4786,
	4786,
	7088,
	7088,
	0,
	0,
	4726,
	4731,
	4902,
	7451,
	0,
	3981,
	0,
	7088,
	7451,
	7315,
	7315,
	7315,
	7315,
	7315,
	7315,
	7088,
	7088,
	6295,
	7088,
	7088,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	4762,
	3960,
	4762,
	3960,
	4902,
	4786,
	4902,
	0,
	0,
	0,
	0,
	1816,
	0,
	4786,
	4762,
	3960,
	254,
	4786,
	0,
	3534,
	4786,
	150,
	2856,
	2856,
	0,
	0,
	4902,
	3981,
	4711,
	3903,
	4711,
	3903,
	4711,
	3903,
	4763,
	3961,
	4786,
	3981,
	224,
	7088,
	7269,
};
static const Il2CppTokenRangePair s_rgctxIndices[8] = 
{
	{ 0x02000026, { 11, 5 } },
	{ 0x06000077, { 0, 2 } },
	{ 0x06000094, { 2, 1 } },
	{ 0x06000095, { 3, 1 } },
	{ 0x06000096, { 4, 1 } },
	{ 0x06000097, { 5, 1 } },
	{ 0x06000099, { 6, 1 } },
	{ 0x0600009F, { 7, 4 } },
};
extern const uint32_t g_rgctx_JsonConvert_DeserializeObject_TisT_t523AE78BA8EA43AA3C112531031E255143AB370C_m0D72077A0435643D8A2BE1BF6EADFAADE4F76AE9;
extern const uint32_t g_rgctx_T_t523AE78BA8EA43AA3C112531031E255143AB370C;
extern const uint32_t g_rgctx_WebRequest_SendAsync_TisT_tA49DCB590D88439D7E9C6F3EB1E7DB846220B388_m4C452762E2D3CD73FCB8F7FAF616877483966B6D;
extern const uint32_t g_rgctx_WebRequest_SendAsync_TisT_t2BD968914AEB61532EDC5E9456CCDAB4E3977C9D_mA232F5525DE55212026280C155B30EBD41A218AB;
extern const uint32_t g_rgctx_WebRequest_SendAsync_TisT_t7ABD43FD69E9F63514ECE024FB8ABC0E12C7B37C_m8647A3348F24D51FDE6AEED74AF5CF469F7646D2;
extern const uint32_t g_rgctx_WebRequest_SendAsync_TisT_t20EB794830E97F1551983BD237A8C3DC36EFA7F4_mA740CAA0D26607F743B6B5A1866A3307E8ABA7BB;
extern const uint32_t g_rgctx_WebRequest_SendAsync_TisT_t0572149ED3F70EC7CF0A23190AA6FE4609AA174F_mD0AD3B8C2E72CA362A5D0980AECB8D177D38F6C4;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Create_mE8BF43B99E46CB53F794303E7A77E56C10A43017;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_t8ACDAE8575527535927213802E35688E9EF9299F;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__15_1_t033EBE570EA01A1873796B9CD30A87196770515A_mCE6CC1381DF04CC32B5A87A4A443CDEE5E2EBD5D;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_get_Task_mF86C7CEE693C9E2A8E5ACA8542BD0C27D11561CE;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CSendAsyncU3Ed__15_1_t8A73484182B6185F6AE821811A75207E18E1038C_m7F4EA45D1A99F65A2683C9AC2B4652DF6145338B;
extern const uint32_t g_rgctx_JsonConvert_DeserializeObject_TisT_t63A3ABEC22329B57EECCF84FC8E36ECA9E809B0A_mAD4E90766A7EEB116A1B3D7CB3FBEE6EAA1B44F8;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetException_m428E70885C0DE1C3CF36E622913E5F3228B1C144;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetResult_m63C8CDD7203B932EF4E086309D29C77AF909A21E;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_m69CE4CDD1196FDE09531786AC88810290F5EBB07;
static const Il2CppRGCTXDefinition s_rgctxValues[16] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeObject_TisT_t523AE78BA8EA43AA3C112531031E255143AB370C_m0D72077A0435643D8A2BE1BF6EADFAADE4F76AE9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t523AE78BA8EA43AA3C112531031E255143AB370C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WebRequest_SendAsync_TisT_tA49DCB590D88439D7E9C6F3EB1E7DB846220B388_m4C452762E2D3CD73FCB8F7FAF616877483966B6D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WebRequest_SendAsync_TisT_t2BD968914AEB61532EDC5E9456CCDAB4E3977C9D_mA232F5525DE55212026280C155B30EBD41A218AB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WebRequest_SendAsync_TisT_t7ABD43FD69E9F63514ECE024FB8ABC0E12C7B37C_m8647A3348F24D51FDE6AEED74AF5CF469F7646D2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WebRequest_SendAsync_TisT_t20EB794830E97F1551983BD237A8C3DC36EFA7F4_mA740CAA0D26607F743B6B5A1866A3307E8ABA7BB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WebRequest_SendAsync_TisT_t0572149ED3F70EC7CF0A23190AA6FE4609AA174F_mD0AD3B8C2E72CA362A5D0980AECB8D177D38F6C4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Create_mE8BF43B99E46CB53F794303E7A77E56C10A43017 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_t8ACDAE8575527535927213802E35688E9EF9299F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__15_1_t033EBE570EA01A1873796B9CD30A87196770515A_mCE6CC1381DF04CC32B5A87A4A443CDEE5E2EBD5D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_get_Task_mF86C7CEE693C9E2A8E5ACA8542BD0C27D11561CE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CSendAsyncU3Ed__15_1_t8A73484182B6185F6AE821811A75207E18E1038C_m7F4EA45D1A99F65A2683C9AC2B4652DF6145338B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeObject_TisT_t63A3ABEC22329B57EECCF84FC8E36ECA9E809B0A_mAD4E90766A7EEB116A1B3D7CB3FBEE6EAA1B44F8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetException_m428E70885C0DE1C3CF36E622913E5F3228B1C144 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetResult_m63C8CDD7203B932EF4E086309D29C77AF909A21E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_m69CE4CDD1196FDE09531786AC88810290F5EBB07 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Services_Authentication_PlayerAccounts_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Services_Authentication_PlayerAccounts_CodeGenModule = 
{
	"Unity.Services.Authentication.PlayerAccounts.dll",
	181,
	s_methodPointers,
	4,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	8,
	s_rgctxIndices,
	16,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
